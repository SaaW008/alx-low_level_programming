#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - flip bit
 * @n: n1
 * @m: n2
 *
 * Return: fliped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
