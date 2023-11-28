#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of dlistint_t list
 * @head: pointer to a pointer to head of the list
 * @n: integer value in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *other_node;
	dlistint_t *end_node;

	other_node = malloc(sizeof(dlistint_t));
	if (other_node == NULL)
		return (NULL);

	other_node->n = n;
	other_node->next = NULL;
	other_node->prev = NULL;

	if (*head != NULL)
	{
		end_node = *head;
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = other_node;
		other_node->prev = end_node;
	}
	else
	{
		*head = other_node;
	}

	return (other_node);
}

