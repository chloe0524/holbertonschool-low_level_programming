#include "main.h"

/**
 * flip_bits - returns num of bits flip to get n to m
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ctr = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		ctr += xor & 1;
		xor >>= 1;
	}

	return (ctr);
}

