#include "lists.h"

/**
 * add_node - adds a new nod to the begining linked list
 * @head: contains the address of the first node
 * @str: string to be printed
 *
 * Return: returns a pointer to list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_st;
	int i, count = 0;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	new_st = malloc(sizeof(list_t));
	if (new_st == NULL)
		return (NULL);

	new_st->str = strdup(str);

	if (new_st->str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	new_st->len = count;
	new_st->next = *head;

	*head = new_st;

	return(new_st);
}
