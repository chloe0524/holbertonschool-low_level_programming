#include "lists.h"

/**
 * dlistint_len - prints number of elements dlistint_t
 * @h: pointer to head of list.
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
