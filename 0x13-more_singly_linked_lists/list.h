#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_listint(const list_t *h);
size_t listint_len(const list_t *h);
list_t *add_nodeint(list_t **head, const int n);
list_t *add_nodeint_end(list_t **head, const int n);
void free_listint(list_t *head);
void free_listint2(list_t **head);
int pop_listint(list_t **head);
list_t *get_nodeint_at_index(list_t *head, unsigned int index);
int sum_listint(list_t *head);
list_t *insert_nodeint_at_index(list_t **head, unsigned int idx, int n);
int delete_nodeint_at_index(list_t **head, unsigned int index);

#endif
