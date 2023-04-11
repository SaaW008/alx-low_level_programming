#include "main.h"

/**
 * _isdigit - check the character is between 1 and 9
 * @c: tested variable
 * Return: 1 if is digit, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
