#include "main.h"
#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: first string, the destination
 * @src: second string
 * Return: full string, dest + src
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
