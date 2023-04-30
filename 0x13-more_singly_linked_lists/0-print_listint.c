#include <stdio.h>
#include "lists.h"
#include <stdint.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: listint_t passed as a argument
 * Return: size_t of counted items
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (i = 0 ; i <= SIZE_MAX ; i++)
	{
		if ((h + i)->next != NULL)
		{
			printf("%d\n", (h + i)->n);
		}
	}
	return (i);
}
