#include "main.h"

/**
 * print_binary - prints binary representation of number
 * @n: number to convert and print
 */

void print_binary(unsigned long int n)
{
	unsigned long int the_bit = 1UL << 63;
	char ici = '0';

	while (!(the_bit & n) && the_bit != 0)
		the_bit = the_bit >> 1;

	if (the_bit == 0)
	{
		_putchar(ici);
		return;
	}

	while (the_bit)
	{
		if (the_bit & n)
			ici = '1';
		else

			ici = '0';
		_putchar(ici);
		the_bit = the_bit >> 1;

	}
}
