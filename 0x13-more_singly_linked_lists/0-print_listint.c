#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: listint_t passed as a argument
 * Return: size_t of counted items
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	do {
		printf("%d\n", (h + i)->n);
		i++;
	}
	while ((h + i)->next != NULL)
	return (i);
}
