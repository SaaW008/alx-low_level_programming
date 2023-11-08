#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - by function
 * @array: array
 * @size: size
 * @action: to do
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i <= size - 1; i++)
			action(array[i]);
	}
}
