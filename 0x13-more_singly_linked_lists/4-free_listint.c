#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function to free a linked list
 * @head: head passed as argument
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *cursor = head;
	listint_t *prev = NULL;

	while (cursor != NULL)
	{
		prev = cursor;
		cursor = cursor->next;
		free(prev);
	}
}
