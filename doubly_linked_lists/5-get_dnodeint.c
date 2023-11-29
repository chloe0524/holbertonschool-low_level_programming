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
	for (index = index; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return head;
}

