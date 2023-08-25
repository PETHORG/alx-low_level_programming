#include "lists.h"

/**
 * add_node_end - adds node to the end of
 *  a single linked list
 *  @head: address of the first node
 *  @str: string to be printed, an element of the linked 
 *  list
 *
 *  Return: returns the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i, count = 0;
	list_t *pt;
	list_t *new_st;

	if (str == NULL || strdup(str) == NULL)
		return (NULL);

	new_st = malloc(sizeof(list_t));
	if (new_st == NULL)
		return (NULL);
	
	new_st->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	new_st->len = count;
	new_st->next = NULL;

	if (*head == NULL)
	{
		*head = new_st;
	}
	else
	{
		pt = *head;
		while (pt->next != NULL)
			pt = pt->next;
		
		pt->next = new_st;
	}

	return (new_st);
}
