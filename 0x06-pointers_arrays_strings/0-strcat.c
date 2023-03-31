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
	int lsrc,ldest;
	int i = 0;

	lsrc = strlen(src);
	ldest = strlen(dest) - 1;
	while ( i <= lsrc )
	{
		*dest[ldest + i] = *src[i];
		i++;
	}
	return *dest;
}
