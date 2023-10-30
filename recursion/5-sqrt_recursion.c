#include "main.h"
#include <math.h>

/**
 * square_root - Calc. natural square root.
 * @n: Number to calculate square root.
 * @r: Recursion value.
 * Return: Square root or -1.
 */

int square_root(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r < n)
	{
		return (square_root(n, r + 1));
	}
	return (-1);
}

/**
 * _sqrt_recursion - Calculate square root.
 * @n: Number to find square root.
 * Return: Square root or -1.
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (square_root(n, 1));
}
