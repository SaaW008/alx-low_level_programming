#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	my_union u;

	u.u64 = 0x4A;
	if (u.u8 == u.u16 && u.u8 == u.u32 && u.u8 == u.u64)
		return (1);
	else
		return (0);
}
