#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create an array of chars
 * @str: char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *ret;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
		size++;
	ret = malloc(sizeof(char) * size);
	if (ret == NULL)
		return (NULL);
	return (ret);
}
