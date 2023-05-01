#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that
 * delete a node at a given position
 * @head: singly linked list passed as a argument
 * @index: is the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor = *head;
	listint_t *prev = cursor;
	unsigned int i = 0;

	while (cursor != NULL)
	{
		if (i == index)
		{
			prev->next = cursor->next;
			if (index == 0)
				*head = cursor->next;
			free(cursor);
			return (1);
		}
		prev = cursor;
		cursor = cursor->next;
		i++;
	}
	return (-1);
}
