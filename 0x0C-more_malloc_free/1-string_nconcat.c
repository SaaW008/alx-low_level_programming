#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 *
 * Return: string concatenate
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len_s1 = 0, len_s2 = 0, agg = 0, i = 0, size_u;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
	{
		len_s1++;
	}
	while (s2[len_s2])
	{
		len_s2++;
	}
	if (len_s2 >= n)
		size_u = n;
	else
		size_u = len_s2;
	agg = len_s1 + size_u;
	res = malloc(agg + 1 * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i <= len_s1; i++)
	{
		res[i] = s1[i];
	}
	for (i = 0; i <= size_u; i++)
	{
		res[len_s1 + i] = s2[i];
	}
	res[agg + 1] = '\0';
	return (res);
}
