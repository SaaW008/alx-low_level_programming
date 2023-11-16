#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function thatdelet
 * the first node of a listint_t list
 * @head: listint_t passed as a argument
 * Return: int data already stored in the head, 0 if failed
 */

int pop_listint(listint_t **head)
{
	int nData = 0;
	listint_t *Next = *head;

	if (*head != NULL)
	{
		nData = (*head)->n;
		Next = Next->next;
		free(*head);
		*head = Next;
		return (nData);
	}
	return (0);
}
