#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with separator
 *
 * @separator: delimiter between numbers
 * @n: number of arguments
 * Return: prints varargs
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list printslist;

	va_start(printslist, n);

	if (separator == NULL)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printslist, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(printslist);
}
