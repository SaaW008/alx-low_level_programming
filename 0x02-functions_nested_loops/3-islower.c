#include "main.h"

/**
 * _islower - lower case checker
 *
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
