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
	return (hash_djb2(key) % size);
}
