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
	dlistint_t *tmp, *n_node;

	if (h == NULL)
		return (NULL);

	tmp = *h;
	n_node = NULL;

	while (idx != 0)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}

	if (tmp == NULL)
		return (NULL);

	if (idx == 0)
	{
		n_node = malloc(sizeof(dlistint_t));
		if (n_node == NULL)
			return (NULL);

		n_node->n = n;
		n_node->prev = tmp->prev;
		n_node->next = tmp;

		if (tmp->prev != NULL)
			tmp->prev->next = n_node;
		else
			*h = n_node;

		tmp->prev = n_node;
	}

	return (n_node);
}
