#include "main.h"

/**
 * _abs - the absolute value of an integer
 * @ab: to test
 * Return: on success 1
 * on error, -1 is returned, and error is set appropriately.
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
