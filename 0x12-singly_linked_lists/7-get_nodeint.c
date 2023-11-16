#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the
 * nth node of a listint_t linked list.
 * @head: listint_t passed as a argument
 * @index: is the index of the node, starting at 0
 * Return: listint_t nth node, if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *cursor = head;
	unsigned int i = 0;

	while (cursor != NULL)
	{
		if (i == index)
			return (cursor);
		cursor = cursor->next;
		i++;
	}
	return (0);
}
