#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that add
 * a node at the begining of a listint_t list
 * @head: listint_t passed as a argument
 * @n: int value to add with a new node
 * Return: size_t of counted items, 1 if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nn;

	nn = malloc(sizeof(listint_t));
	nn->n = n;
	nn->next = *head;
	if (nn->next != NULL)
	{
		nn = *head;
		return (nn);
	}
	else
	{
		return (NULL);
	}
}