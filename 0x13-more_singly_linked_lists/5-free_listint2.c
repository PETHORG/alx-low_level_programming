#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *h;

	h = *head;

	if (h == NULL)
		return;

	while (h != NULL)
	{
		h = h->next;
		free(h);
	}
}
