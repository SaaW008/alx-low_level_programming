#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - a function that
 * inserts a new node at a given position
 * @head: singly linked list passed as a argument
 * @idx: is the index of the list where the new node should be added
 * @n: int value to add with a new node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nn = NULL; /*nn is the new node*/
	listint_t *cursor = *head;
	unsigned int i = 0;

	while (cursor != NULL)
	{
		if (i == idx - 1)
		{
			nn = malloc(sizeof(listint_t));
			nn->n = n;
			nn->next = cursor->next;
			cursor->next = nn;
			return (nn);
		}
		i++;
	}
	return (NULL);
}
