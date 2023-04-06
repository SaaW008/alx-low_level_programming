#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to print in revers
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
