#include "main.h"

/**
 * binary_to_uint - convert a const binary to decimal form
 * @b: pointer to binary char
 *
 * Return: On success decimal form.
 * On error, 0 is returned.
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, cnt = 0, j = 1;
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] - '0') != 0 && (b[i] - '0') != 1)
			return (0);
		cnt++;
		i++;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			result += j;
		j *= 2;
	}
	return (result);
}
