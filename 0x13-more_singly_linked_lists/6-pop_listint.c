#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data
 * @head: linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *h;

	if (*head == NULL)
		return (0);

	h = *head;

	data = h->n;

	*head = h->next;
	free(h);

	return (data);

}
