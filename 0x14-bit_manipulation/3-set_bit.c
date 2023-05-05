#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index:  index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 64)
		return (-1);
	for (i = 0; i <= index ; (*n |= 1) << index, i++)
	{
		return (1);
	}
/**
 *	if ((*n = *n | 1) << index)
 *	{
 *		return (1);
 *	}
 *	else
 *	{
 *		return (-1);
 *		}
*/
	return (-1);
}
