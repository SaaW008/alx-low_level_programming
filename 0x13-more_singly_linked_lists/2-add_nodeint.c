#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that add
 * a node at the begining of a listint_t list
 * @head: listint_t passed as a argument
 * @n: int value to add with a new node
 * Return: size_t of counted items, NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn = NULL;

	nn = malloc(sizeof(listint_t));
	if (nn == NULL)
		return (NULL);
	nn->n = n;
	nn->next = *head;
	*head = nn;
	return (nn);
}
