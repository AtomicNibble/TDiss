

namespace bitUtil
{

#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)

#if X_64
#pragma intrinsic(_BitScanForward64)
#pragma intrinsic(_BitScanReverse64)
#endif // !X_64

	namespace Internal
	{
		template <size_t N>
		struct Implementation {};

		template <>
		struct Implementation < 1 >
		{
			template<typename T>
			static inline bool IsBitSet(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 1, "sizeof(T) != 1");
				return (static_cast<uint8_t>(val) & (1u << whichbit)) != 0;
			}

			template<typename T>
			static inline T SetFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) ==1, "sizeof(T) != 1");
				return static_cast<T>(static_cast<uint8_t>(val) | flag);
			}

			template<typename T>
			static inline T ClearFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 1, "sizeof(T) != 1");
				return static_cast<T>(static_cast<uint8_t>(val) & ~flag);
			}
		};

		// all the casting is cus I support signed numbers. Tom.
		template <>
		struct Implementation < 2 >
		{
			template<typename T>
			static inline bool IsFlagSet(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 2, "sizeof(T) != 2");
				return (static_cast<uint16_t>(val)& flag) != 0;
			}

			template<typename T>
			static inline T SetFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 2, "sizeof(T) != 2");
				return static_cast<T>(static_cast<uint16_t>(val) | flag);
			}

			template<typename T>
			static inline T ClearFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 2, "sizeof(T) != 2");
				return static_cast<T>(static_cast<uint16_t>(val) & ~flag);
			}

			template<typename T>
			static inline bool IsBitSet(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 2, "sizeof(T) != 2");
				return (static_cast<uint16_t>(val)& (1u << whichbit)) != 0;
			}

			template<typename T>
			static inline T SetBit(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 2, "sizeof(T) != 2");
				return static_cast<T>(static_cast<uint16_t>(val) | (1u << whichbit));
			}

			template<typename T>
			static inline T ClearBit(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 2, "sizeof(T) != 2");
				return static_cast<T>(static_cast<uint16_t>(val)& (~(1u << whichbit)));
			}

		};


		template <>
		struct Implementation<4>
		{
			template<typename T>
			static inline bool IsFlagSet(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) != 4");
				return (static_cast<uint32_t>(val) & flag) != 0;
			}

			template<typename T>
			static inline T SetFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) != 4");
				return static_cast<T>(static_cast<uint32_t>(val) | flag);
			}

			template<typename T>
			static inline T ClearFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) != 4");
				return static_cast<T>(static_cast<uint32_t>(val) & ~flag);
			}

			template<typename T>
			static inline bool IsBitSet(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) != 4");
				return (static_cast<uint32_t>(val) & (1u << whichbit)) != 0;
			}

			template<typename T>
			static inline T SetBit(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) != 4");
				return static_cast<T>(static_cast<uint32_t>(val) | (1u << whichbit));
			}

			template<typename T>
			static inline T ClearBit(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) != 4");
				return static_cast<T>(static_cast<uint32_t>(val) & (~(1u << whichbit)));
			}

			template<typename T>
			static inline T ReplaceBits(T val, uint32_t startBit, uint32_t numBits, T bits)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) != 4");

				// make a mask that excludes the replace area to clean it first
				// allowing a simple | with the bits.
				const uint32_t mask = ~(((1u << numBits) - 1) << startBit);

				return static_cast<T>((static_cast<uint32_t>(val) & mask) | 
					(static_cast<uint32_t>(bits) << startBit));
			}

			template <typename T>
			static inline unsigned int CountBits(T value)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

				uint32_t v = static_cast<uint32_t>(value)-((static_cast<uint32_t>(value) >> 1u) & 0x55555555u);
				v = (v & 0x33333333u) + ((v >> 2) & 0x33333333u);
				return (((v + (v >> 4u) & 0xF0F0F0Fu) * 0x1010101u) >> 24u);
			}

			template <typename T>
			static inline unsigned int ScanBits(T value)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

				unsigned long index;
				const unsigned char result = _BitScanReverse(&index, static_cast<uint32_t>(value));

				if (result == 0) {
					return NO_BITS_SET;
				}

				return index;
			}

			template <typename T>
			static inline unsigned int ScanBitsForward(T value)
			{
				static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

				unsigned long index;
				const unsigned char result = _BitScanForward(&index, static_cast<uint32_t>(value));

				if (result == 0) {
					return NO_BITS_SET;
				}

				return index;
			}
		};

		template <>
		struct Implementation<8>
		{
			template<typename T>
			static inline bool IsFlagSet(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) != 8");
				return (static_cast<uint64_t>(val)& flag) != 0;
			}

			template<typename T>
			static inline T SetFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) != 8");
				return static_cast<T>(static_cast<uint64_t>(val) | flag);
			}

			template<typename T>
			static inline T ClearFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) != 8");
				return static_cast<T>(static_cast<uint64_t>(val) & ~flag);
			}

			template<typename T>
			static inline bool IsBitSet(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) != 8");
				return (static_cast<uint64_t>(val)& (1ui64 << whichbit)) != 0;
			}

			template<typename T>
			static inline T SetBit(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) != 8");
				return static_cast<T>(static_cast<uint64_t>(val) | (1ui64 << whichbit));
			}

			template<typename T>
			static inline T ClearBit(T val, uint32_t whichbit)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) != 8");
				return static_cast<T>(static_cast<uint64_t>(val)& (~(1ui64 << whichbit)));
			}

			template<typename T>
			static inline T ReplaceBits(T val, uint32_t startBit, uint32_t numBits, T bits)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) != 8");

				// make a mask that excludes the replace area to clean it first
				// allowing a simple | with the bits.
				const uint64_t mask = ~(((1ull << numBits) - 1) << startBit);

				return static_cast<T>((static_cast<uint64_t>(val) & mask) |
					(static_cast<uint64_t>(bits) << startBit));
			}

			template <typename T>
			static inline unsigned int CountBits(T value)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

				uint64_t v = static_cast<uint64_t>(value)-((static_cast<uint64_t>(value) >> 1u) & 0x5555555555555555UL);
				v = (v & 0x3333333333333333UL) + ((v >> 2) & 0x3333333333333333UL);
				return  static_cast<uint32_t>(((v + (v >> 4u) & 0xF0F0F0F0F0F0F0FUL) * 0x101010101010101UL) >> 56);
			}

			template <typename T>
			static inline unsigned int ScanBits(T value)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

				unsigned long index;
#if X_64		
				const unsigned char result = _BitScanReverse64(&index, static_cast<uint64_t>(value));
				
				if (result == 0) {
					return NO_BITS_SET;
				}

				return index;
#else
				union {
					int64_t val;
					struct {
						int32_t low; // LSB
						int32_t high; // MSB
					};
				};

				val = value;

				index = Implementation<4>::ScanBits(high);
				if (index == NO_BITS_SET) {
					index = Implementation<4>::ScanBits(low);
					if (index != NO_BITS_SET) {
						return index;
					}
				}
				else {
					index += 32;
				}

				return index;
#endif // !X_64
			}

			template <typename T>
			static inline unsigned int ScanBitsForward(T value)
			{
				static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

				unsigned long index;

#if X_64
				const unsigned char result = _BitScanForward64(&index, static_cast<uint64_t>(value));

				if (result == 0) {
					return NO_BITS_SET;
				}

				return index;
#else // X_64
				union {
					int64_t val;
					struct {
						int32_t low; // LSB
						int32_t high; // MSB
					};
				};

				val = value;

				index = Implementation<4>::ScanBitsForward(low);
				if (index == NO_BITS_SET) {
					index = Implementation<4>::ScanBitsForward(high);
					if (index != NO_BITS_SET) {
						return index + 32;
					}
				}

				return index;
#endif // !X_64
			}

		};

	} // namespace Internal

	// call the correct one depending on the size of the type.

	template<typename T>
	inline bool IsFlagSet(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
	{
		return Internal::Implementation<sizeof(T)>::IsFlagSet(val, flag);
	}

	template<typename T>
	inline T SetFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
	{
		return Internal::Implementation<sizeof(T)>::SetFlag(val, flag);
	}

	template<typename T>
	inline T ClearFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag)
	{
		return Internal::Implementation<sizeof(T)>::ClearFlag(val, flag);
	}

	template<typename T>
	bool IsBitSet(T val, uint32_t whichbit)
	{
		return Internal::Implementation<sizeof(T)>::IsBitSet(val, whichbit);
	}

	template<typename T>
	T SetBit(T val, uint32_t whichbit)
	{
		return Internal::Implementation<sizeof(T)>::SetBit(val, whichbit);
	}

	template<typename T>
	T ClearBit(T val, uint32_t whichbit)
	{
		return Internal::Implementation<sizeof(T)>::ClearBit(val, whichbit);
	}

	template<typename T>
	T ReplaceBits(T val, uint32_t startBit, uint32_t numBits, T bits)
	{
		return Internal::Implementation<sizeof(T)>::ReplaceBits(val, startBit, numBits, bits);
	}

	template <typename T>
	inline unsigned int CountBits(T value)
	{
		return Internal::Implementation<sizeof(T)>::CountBits(value);
	}

	template <typename T>
	inline unsigned int ScanBits(T value)
	{
		return Internal::Implementation<sizeof(T)>::ScanBits(value);
	}

	template <typename T>
	inline unsigned int ScanBitsForward(T value)
	{
		return Internal::Implementation<sizeof(T)>::ScanBitsForward(value);
	}

} // namespace bitUtil