#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - print string
 *
 * @n: number of args
 * Return: prints var
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list printslist;

	if (separator == NULL)
	{
		return;
	}

	va_start(printslist, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", va_arg(printslist, int));
	}
	if (i <= 4)
		printf("%d", va_arg(printslist, int));

	va_end(printslist);
}
