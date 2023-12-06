#include "hash_tables.h"

/**
 * key_index - gets index of a key in a hash table
 * @key: key hashed and indexed
 * @size: size of the hash table.
 *
 * Return: index placed wher key should be
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);
	const unsigned char *hash_t[33];

	while (hash_t[index] != NULL)
	{
		index = (index + 1) % size;
	}

	hash_t[index] = key;
	return (index);
}
