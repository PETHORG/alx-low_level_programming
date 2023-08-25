#include "lists.h"

/**
 * free_list - frees every list structured in a memory
 * @head: address of the first node 
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head= head->next;
	}
}
