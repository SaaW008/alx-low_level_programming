#include "main.h"

/**
 * print_line - draws a straight line
 * @n: input number of times to print '_'
 * Return: straight line
 */
void print_line(int n)
{
	int cn;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (cn = 1; cn <= n; cn++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
