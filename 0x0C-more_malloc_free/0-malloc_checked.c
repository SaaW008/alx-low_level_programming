#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that check malloc
 * @b: size
 * Return: no return
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
		return (NULL);
	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
