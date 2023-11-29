#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at given position in list
 * @h: Pointer to head of list
 * @idx: Index
 * @n: Integer value for new node
 *
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node, *ctr;
	unsigned int index;

	if (!h || (idx && *h == NULL))
		return (NULL);

	ctr = *h;

	n_node = malloc(sizeof(dlistint_t));
	if (!n_node)
		return (NULL);

	n_node->n = n;

	if (!idx)
	{
		n_node->prev = NULL;
		n_node->next = ctr;
		if (ctr)
			ctr->prev = n_node;
		*h = n_node;
		return (n_node);
	}

	for (index = 0; index < (idx - 1) && (ctr->next); index++)
		ctr = ctr->next;

	if (index < (idx - 1))
	{
		free(n_node);
		return (NULL);
	}

	n_node->prev = ctr;
	if (ctr->next)
		(ctr->next)->prev = n_node;
	n_node->next = ctr->next;
	ctr->next = n_node;

	return (n_node);
}
