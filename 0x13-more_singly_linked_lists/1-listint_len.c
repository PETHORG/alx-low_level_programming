#include "lists.h"

/**
 * listint_len - counts the elements of a list
 * @h: the head of the linked list
 *
 * Return: the count of all elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
