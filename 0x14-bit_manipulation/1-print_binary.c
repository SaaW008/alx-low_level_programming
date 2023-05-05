#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number
 *
 * Return: no return.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bin = 0, base = 1, reversed = 0;

	while (n > 0)
	{
		bin = bin + (n % 2) * base;
		n /= 2;
		base *= 10;
	}
	if (bin == 0)
	{
		putchar('0');
	}
	else
	{
		while (bin > 0)
		{
			reversed = reversed * 10 + bin % 10;
			bin /= 10;
		}
		while (reversed > 0)
		{
			putchar(reversed % 10 + '0');
			reversed /= 10;
		}
	}
}
