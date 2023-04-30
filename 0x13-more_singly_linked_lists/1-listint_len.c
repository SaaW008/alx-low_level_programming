#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: listint_t passed as a argument
 * Return: size_t of counted items
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
