#include "lists.h"

/**
 * sum_listint - peints sum of all data in linked list
 * @head: head of linked list
 * Return: the sum of all elements
 */

int sum_listint(listint_t *head)
{

	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
