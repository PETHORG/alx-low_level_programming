#include "lists.h"

/**
 * get_nodein⁵t_at_index - returns nth node of linked list
 * @head: head of linked list
 * @index: nth node
 *
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}
