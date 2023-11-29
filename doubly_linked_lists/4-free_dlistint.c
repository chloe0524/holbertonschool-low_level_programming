#include "lists.h"

/**
 * free_dlistint - frees memory occupied by list
 * @head: pointer to head of linked list.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		dlistint_t *next_node = head->next;
		dlistint_t *prev_node = head->prev;

		if (prev_node)
			prev_node->next = next_node;
		if (next_node)
			next_node->prev = prev_node;

		free_dlistint(next_node);
		free_dlistint(prev_node);
		free(head);
	}
}

