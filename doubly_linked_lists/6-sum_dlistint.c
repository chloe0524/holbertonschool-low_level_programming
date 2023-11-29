#include "lists.h"

/**
 * sum_dlistint - calculate the sum of elements in a doubly linked list
 * @head: pointer to list head
 *
 * Return: Sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int ctr = 0;

	while (head != NULL)
	{
		ctr += head->n;
		head = head->next;
	}

	return (ctr);
}


