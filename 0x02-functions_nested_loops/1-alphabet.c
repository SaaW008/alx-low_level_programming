#include "main.h"

/**
 * print_alphabet - alphabet lower case as string
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

}
