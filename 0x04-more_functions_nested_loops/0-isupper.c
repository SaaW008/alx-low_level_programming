#include "main.h"

/**
 * _isupper - check the character is upper or not
 * @c: tested variable
 * Retune: 1 if upper, 0 if not
 */

int _isupper(int c)
{
	if ( c > 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
