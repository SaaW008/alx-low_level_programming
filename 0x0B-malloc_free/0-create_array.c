#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size
 * @c: char
 * Return: pointer to allocated space
 */

char *create_array(unsigned int size, char c)
{
	char *ret;
/*	int i; */

	if (size == 0)
		return (NULL);
	ret = malloc(sizeof(char) * size);
	ret[0] = c;
	return (ret);
}
