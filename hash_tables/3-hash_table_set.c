#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add/update the key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *after_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	after_node = malloc(sizeof(hash_node_t));
	if (after_node == NULL)
		return (0);

	after_node->key = strdup(key);
	after_node->value = strdup(value);
	if (after_node->key == NULL || after_node->value == NULL)
	{
		free(after_node->key);
		free(after_node->value);
		free(after_node);
		return (0);
	}

	after_node->next = ht->array[index];
	ht->array[index] = after_node;

	return (1);
}

