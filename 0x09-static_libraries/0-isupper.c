#include "main.h"

/**
 * _isupper - check the character is upper or not
 * @c: tested variable
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
