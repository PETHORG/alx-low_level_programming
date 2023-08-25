#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: struct passed as parameter
 *
 * Return: size_t(unsigned int)
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *pt;

	pt = h;

	while (pt != NULL)
	{
		if (pt->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", pt->len, pt->str);


		pt = pt->next;
		i++;

	}

	return (i);
}
