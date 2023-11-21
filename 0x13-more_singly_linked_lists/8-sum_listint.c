#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked listg
 * @head: listint_t passed as a argument
 * Return: integer sum, if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	int sum = 0;

	while (cursor != NULL)
	{
		sum = sum + cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
