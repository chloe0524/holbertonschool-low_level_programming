#include "lists.h"

/**
 * free_list - frees memory occupied by linked list
 * @head: pointer to head of linked list.
 */

void free_list(list_t *head)
{
	if (head->next)
		free_list(head->next);
	free(head);
}
