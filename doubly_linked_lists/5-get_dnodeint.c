#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index in doubly linked list
 * @head: pointer to list head
 * @index: Index of node to get (start = 0)
 *
 * Return: Node at index, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int ctr = 0;

	while (index == 0)
	{
		if (head && ctr != index)
		{
			ctr++;
			head = head->next;
		}
		if (head && ctr == index)
		{
			return (head);
		}
	}
	return (NULL);
}
