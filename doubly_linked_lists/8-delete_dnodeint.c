#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of  list.
 * @head: Pointer to the head of list.
 * @index: Position of node to delete.
 *
 * Return: 1 for success or -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_bye, *plus_node = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(plus_node);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (; index > 0 && plus_node; index--)
		plus_node = plus_node->next;

	if (index != 0)
		return (-1);

	node_bye = plus_node;
	if (plus_node->prev)
		plus_node->prev->next = plus_node->next;
	if (plus_node->next)
		plus_node->next->prev = plus_node->prev;

	free(node_bye);
	return (1);
}

