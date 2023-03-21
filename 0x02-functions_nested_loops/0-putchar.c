#include <stdio.h>
#include <string.h>
#include "./_putchar.c"

/**
* main - _putchar
*
* Return: Always (0)
*
**/

int main(void)
{
	char *c = "_putchar";
	int ln = strlen(c), i;

	for (i = 0; i <= ln; i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
