#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints
 * all the elements of a list_t list
 * @h: list_t passed as a argument
 * Return: size_t of counted items
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
