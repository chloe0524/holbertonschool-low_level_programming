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
	va_list printslist;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(printslist, n);

		while (i < n)
		{
			printf("%d", va_arg(printslist, int));

			if (i != n - 1  && separator != NULL)
				printf("%s", separator);

			i++;
		}
		va_end(printslist);
	}
	printf("\n");
}
