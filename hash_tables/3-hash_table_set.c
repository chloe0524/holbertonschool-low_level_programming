#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: The hash table.
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *after_node, *before_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	while (before_node != NULL)
	{
		if (strcmp(before_node->key, key) == 0)
		{
			free(before_node->value);
			before_node->value = strdup(value);
			if (before_node->value == NULL)
			{
				return (0);
				return (1);
			}
		}
		before_node = before_node->next;
	}

	after_node = malloc(sizeof(hash_node_t));
	if (after_node == NULL)
	{
		return (0);
	}

	after_node->key = strdup(key);
	after_node->value = strdup(value);
	after_node->next = ht->array[index];
	ht->array[index] = after_node;

	return (1);
}
