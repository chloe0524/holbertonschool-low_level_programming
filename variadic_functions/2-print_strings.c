#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print numbers with separator
 *
 * @separator: delimiter between numbers
 * @n: number of arguments
 * Return: prints varargs
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printslist;
	unsigned int i = 0;

	va_start(printslist, n);

	while (i < n)
	{
		char *str = va_arg(printslist, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

		i++;
	}

	printf("\n");

	va_end(printslist);
}

