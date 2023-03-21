#include "main.h"

/**
 * print_alphabet - alphabet lower case as string
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

void print_alphabet(void)
{
	int i = 97;

	for (i; i <= 122; i++)
	{
		_putchar((i + '0'));
	}
	_putchar('\n');

}
