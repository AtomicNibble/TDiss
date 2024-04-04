#pragma once

namespace bitUtil
{
	namespace FlagType
	{
		template<typename T>
		struct return_
		{
			typedef T type;
		};

		template<uint64_t N>
		struct bytetype : return_<uint64_t> {};

		template<>
		struct bytetype<4> : return_<uint32_t> {};

		template<>
		struct bytetype<3> : return_<uint32_t> {};

		template<>
		struct bytetype<2> : return_<uint16_t> {};

		template<>
		struct bytetype<1> : return_<uint8_t> {};

	} // namespace FlagType


	template<typename T>
	inline bool IsFlagSet(T val, typename FlagType::bytetype<sizeof(T)>::type flag);

	template<typename T>
	inline T SetFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag);

	template<typename T>
	inline T ClearFlag(T val, typename FlagType::bytetype<sizeof(T)>::type flag);

	template<typename T>
	inline bool IsBitSet(T val, uint32_t whichbit);

	template<typename T>
	inline T SetBit(T val, uint32_t whichbit);

	template<typename T>
	inline T ClearBit(T val, uint32_t whichbit);

	template<typename T>
	inline T ReplaceBits(T val, uint32_t startBit, uint32_t numBits, T bits);

	template <typename T>
	inline unsigned int CountBits(T value);

	static const unsigned int NO_BITS_SET = 255;

	// from MSB to LSB, NO_BIT_SET when no bits set
	template <typename T>
	inline unsigned int ScanBits(T value);

	// from LSB to MSB, NO_BIT_SET when no bits set
	template <typename T>
	inline unsigned int ScanBitsForward(T value);


} // namespace bitUtil

#include "BitUtil.inl"

