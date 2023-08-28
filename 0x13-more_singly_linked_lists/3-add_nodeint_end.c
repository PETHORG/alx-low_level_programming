#include "lists.h"

/**
 * add_nodeint_end - adds new nodes to the end of list
 * @head: head of the linked list
 * @n: elemnts of the list
 *
 * Return: the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *h;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = newNode;
	}

	return (newNode);
}
