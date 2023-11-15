#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculates sum of variable args
 *
 * @n: number of args
 * Return: sum of variable args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list mathlist;

	va_start(mathlist, n);
	for (i = 0, sum = 0; i < n; i++)
		sum += va_arg(mathlist, int);

	va_end(mathlist);
	return (sum);
}

