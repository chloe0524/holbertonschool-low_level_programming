#include "lists.h"

/**
 * list_len - prints number of elements list_t
 * @h: pointer to head of list.
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else

			h = h->next;
	}

	return (i);
}
