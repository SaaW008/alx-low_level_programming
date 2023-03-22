#include "main.h"

/**
 * print_sign - the sign of a number
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
