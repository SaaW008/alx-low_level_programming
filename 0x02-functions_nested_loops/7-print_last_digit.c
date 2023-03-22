#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @nld: to test
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
