#include "lists.h"

/**
 * add_node - adds new node at beginning of list list_t
 * @head: pointer to a pointer oe head of list
 * @str: string to be duplicated
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *other_node;

	other_node = malloc(sizeof(list_t));
	while (head != NULL && str != NULL)
	{
		if (other_node == NULL)
			return (NULL);

		other_node->str = strdup(str);
		if (other_node->str == NULL)
		{
			free(other_node);
			return (NULL);
		}

		other_node->len = strlen(str);
		other_node->next = *head;
		*head = other_node;

		return (other_node);
	}
	return (NULL);
}


