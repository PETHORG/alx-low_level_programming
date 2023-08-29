#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a linked list.
 * 
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((h = c) != NULL)
		{
			c = c->next;
			free(h);
		}
		*head = NULL;
	}
}
