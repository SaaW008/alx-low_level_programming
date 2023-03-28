#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: adress of string variable
 * Return: lenght of srting, 0 if no char exist
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
