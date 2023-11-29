#include "lists.h"

/**
 * free_dlistint - frees memory occupied by list
 * @head: pointer to head of linked list.
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free_dlistint(head->prev);
		free(head);
	}
}
