#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of dlistint_t list
 * @head: pointer to a pointer to head of list
 * @n: integer value in the new node
 *
 * Return: address of new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *plus_node;

	plus_node = malloc(sizeof(dlistint_t));
	if (plus_node == NULL)
		return (NULL);

	plus_node->n = n;
	plus_node->prev = NULL;
	plus_node->next = *head;

	if (*head != NULL)
		(*head)->prev = plus_node;

	*head = plus_node;

	return (plus_node);
}
