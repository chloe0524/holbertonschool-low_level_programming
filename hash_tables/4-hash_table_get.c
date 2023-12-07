#include "hash_tables.h"
/**
 * hash_table_get - get value associated with a key in hash table
 * @ht: hash table
 * @key: key to search
 *
 * Return:value with  key, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *after_node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	after_node = ht->array[index];

	while (after_node)
	{
		if (strcmp(after_node->key, key) == 0)
			return (after_node->value);
		after_node = after_node->next;
	}

	return (NULL);
}

