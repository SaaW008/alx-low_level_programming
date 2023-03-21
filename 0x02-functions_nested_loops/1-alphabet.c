#include "main.h"

/**
 * main - _putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
