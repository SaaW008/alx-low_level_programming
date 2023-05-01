#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that add
 * a node at the end of a listint_t list
 * @head: listint_t passed as a argument
 * @n: int value to add with a new node
 * Return: size_t of counted items, NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nn = NULL; /*nn is the new node*/
	listint_t *last = NULL;

	last = *head;
	nn = malloc(sizeof(listint_t));
	nn->n = n;
	nn->next = NULL;
	if (nn == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = nn;
		return (nn);
	}
	while (last)
	{
		if (last->next == NULL)
		{
			last->next = nn;
			return (nn);
		}
		last = last->next;
	}
	return (NULL);
}
