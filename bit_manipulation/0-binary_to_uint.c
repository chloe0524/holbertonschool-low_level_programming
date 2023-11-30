#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 *
 * @b: char string to convert
 *
 * Return: converted value as unsigned int, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int pain = 0;

	if (!b)
		return (0);


	for (b = b ; *b; b++)
	{
		if (*b == '1')
			pain = (pain << 1) + 1;
		else if (*b == '0')
			pain = pain << 1;
		else
			return (0);
	}

	return (pain);
}
