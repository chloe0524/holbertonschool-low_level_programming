#include "main.h"


/**
 * get_bit - gets value of a bit at an index
 *
 * @n: number to extract the bit from
 * @index: index of the bit to retrieve
 *
 * Return: value of the bit -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) > 0);
}

