#include "main.h"

/**
 * _isalpha - checker for alphabetic character
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
