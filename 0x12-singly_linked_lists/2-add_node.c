#include "lists.h"

/**
 * add_node - adds new node to the begining of the head node
 * @head: the head node
 * @str: string to be duplicated and printed
 *
 * Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;

	if (str == NULL)
		return (NULL);
	if (strdup(str) == NULL)
		return (NULL);

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);
	add_node->len = strlen(str);

	if (head == NULL)
		add_node->next = NULL;
	else
		add_node->next = *head;

	*head = add_node;

	return (add_node);
}
