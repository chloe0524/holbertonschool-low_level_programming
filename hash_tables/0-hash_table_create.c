#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * @size: size of array
 * Return: return  pointer or NUll
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *phash;

	phash = malloc(sizeof(hash_table_t));
	if (phash == NULL)
		return (NULL);

	phash->size = size;

	phash->array = malloc(sizeof(hash_node_t *) * size);
	if (phash->array == NULL)
		return (NULL);

	return (phash);
}
