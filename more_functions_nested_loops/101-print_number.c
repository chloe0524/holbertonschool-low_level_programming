#include <stdio.h>
#include "main.h"

/**
 * print_number - print integer
 * @n:  integer to print
 * description: only use _putchar
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
