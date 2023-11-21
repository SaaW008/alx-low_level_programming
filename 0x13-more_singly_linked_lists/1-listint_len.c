#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that return
 * the number of the elements on a list_t list
 * @h: list_t passed as a argument
 * Return: size_t of counted items
 */

size_t listint_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
