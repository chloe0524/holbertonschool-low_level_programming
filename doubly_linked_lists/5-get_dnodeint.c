#include "lists.h"

/*
 *
 *
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ctr = 0;

	while (head && ctr != index)
	{
		ctr++;
		head =head->next;
	}
	if (head && ctr == index)
		return (head);
	return (NULL);
}
