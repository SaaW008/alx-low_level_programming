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
	unsigned int len_s1 = 0, len_s2 = 0, agg = 0, i = 0;

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
	agg = len_s1 + n;
	res = malloc(agg * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
	{
		res[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		res[i + n] = s2[i + n];
	}
	return (res);
}
