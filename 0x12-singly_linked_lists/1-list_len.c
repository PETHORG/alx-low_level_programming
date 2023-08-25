#include "lists.h"

/**
 * list_len - prints number elements(nodes)
 * @h: struct passed as parameter
 *
 * Return: size_t(unsigned int)
 */

size_t list_len(const list_t *h)
{
	int i = 0;
	const list_t *pt;

	pt = h;

	while (pt != NULL)
	{
		pt = pt->next;
		i++;

	}

	return (i);
}
