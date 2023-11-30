#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index to 0.
 *
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to clear.
 *
 * Return: 1 if successful, or -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	*n = *n & (~mask);

	return (1);
}

