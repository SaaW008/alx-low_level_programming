#include "main.h"

/**
 * format_output - a function that prints
 * the prd preformated
 * @prd: to print
 * Return: 0 to exit
 */

int format_output(int prd)
{
	if (prd >= 100)
	{
		_putchar(' ');
		_putchar(prd);
		return (0);
	}
	else if (prd >= 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(prd);
		return (0);
	}
	else if (prd < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(prd);
		return (0);
	}
}

/**
 * print_times_table - a function that prints
 * the n times table, starting with 0
 * @n: n time row
 * Return: no return
 */

void print_times_table(int n)
{
	int r, c, prod;

	if (n > 15 || n < 0)
		return;
	for (r = 0 ; r <= n ; r++)
	{
		_putchar('0');
		for (c = 1; c < n; c++)
		{
			_putchar(',');
			prod = r * c;
			format_output(prod);
		}
	}
	_putchar('\n');
	return (0);
}
