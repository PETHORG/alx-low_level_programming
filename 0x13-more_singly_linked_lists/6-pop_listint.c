#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s element
 * @head: head of the linked list
 * Return: element's data that was popped
 */

int pop_listint(listint_t **head)
{
	int el;
	listint_t *h;

	if (*head == NULL)
		return (0);

	h = *head;

	el = h->n;

	*head = h->next;
	free(tmp);

	return (el);

}
