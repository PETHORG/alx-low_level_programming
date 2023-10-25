#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to a struct
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t lc = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		lc++;
		h = h->next;
	}

	return (lc);
}
