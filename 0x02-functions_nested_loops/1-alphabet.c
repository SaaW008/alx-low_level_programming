#include "main.h"

/**
 * main - alphabet
 *
 * Return: Always 0
 */

int print_alphabet(void)
{
	int i = 97;

	for ( i ; i <= 122 ; i++)
	{
		_putchar((i+'0'));
	}
	_putchar('\n');

	return (0);
}
