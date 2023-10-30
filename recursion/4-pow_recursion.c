#include "main.h"

/**
 * _pow_recursion - calculate the power of a number recursively
 * @x: base number
 * @y: exponent
 *
 * Return: r = result
 */

int _pow_recursion(int x, int y)
{
	int r = 1;
	int i;

	for (i = 0; i < y; i++)
	{
		r = r * x;
	}
	return (r);
}
