#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: The string to print
 *
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if *s[0] = "/0"
	     {
		     _putchar("/n");
		     return 0;
	     }
	_putchar(*s[0]);
	++s;
	_puts_recursion(*s);
}
