#include "main.h"

/**
  * get_bit - a function that returns the value of a bit at a given index
  * @n: hte number
  * @index: The index of the number n
  *
  * Return: value of the number if founded or -1 if error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (-1);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
