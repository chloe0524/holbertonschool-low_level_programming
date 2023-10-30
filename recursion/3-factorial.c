#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: number to calculate the factorial
 *
 * Return: factorial of the given number
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
