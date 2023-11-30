#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 *
 * @n: pointer to the number to modify
 * @index: index of the bit to set
 *
 * Return: 1 if successful, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}

