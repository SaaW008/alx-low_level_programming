#include "main.h"
#include <stdint.h>

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	union my_union
	{
		uint8_t u8;
		uint16_t u16;
		uint32_t u32;
		uint64_t u64;
	};

	union my_union u;

	u.u64 = 0x4A;
	if (u.u8 == u.u16 && u.u8 == u.u32 && u.u8 == u.u64)
		return (1);
	else
		return (0);
}
