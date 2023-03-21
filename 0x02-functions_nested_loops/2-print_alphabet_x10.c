#include "main.h"

/**
 * print_alphabet_x10 - alphabet lower case as string x10 and new line
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

void print_alphabet_x10(void)
{
	int i, c = 10;

	while (c > 0)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		c--;
	}

}
