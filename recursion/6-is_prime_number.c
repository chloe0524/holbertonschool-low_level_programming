#include "main.h"
#include <math.h>

/**
 * prime_number - Calc prime number
 * @n: Number to calculate
 * @r: denominator
 * Return: whether number is prime or not
 */

int prime_number(int n, int r)
{
	if (r >= n && n > 1)
		return (1);
	else if (n % r == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (prime_number(n, r + 1));
}

/**
 * is_prime_number - check for prime number
 * @n: Number to check
 * Return: true = 1 otherwise = 0
 */

int is_prime_number(int n)
{

	if (n < 0)
		return (1);
	return (prime_number(n, 2));
}
