#include "main.h"

/**
 * _pow_recursion - calculate power of number recursively
 * @x: base number
 * @y: exponent
 *
 * Return: r = result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
