#include "main.h"

/**
 * _puts - put a string to stdout
 * @str: a string to execut
 * Return: void.
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
