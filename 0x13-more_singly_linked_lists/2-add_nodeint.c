#include "lists.h"

/**
 * add_nodeint - adds new node to the begining of list
 * @head: the head of a linked list
 * @n: the integer element of thd list
 *
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
