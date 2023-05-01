#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function to free a linked list
 * passed as double pointer
 * @head: head passed as argument
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *cursor = *head;
	listint_t *prev = NULL;

	cursor = cursor->next;
	*head = NULL;
	while (cursor != NULL)
	{
		prev = cursor;
		cursor = cursor->next;
		free(prev);
	}
}
