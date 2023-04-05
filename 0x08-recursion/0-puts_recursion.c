#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: string to print
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	s++;
	_puts_recursion(s);
}
