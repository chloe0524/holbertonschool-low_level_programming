#include "main.h"

/**
 * print_sign - Print sign of number.
 *
 * @n: Number to check for sign.
 *
 * function checks and prints the sign symbol.
 *
 * @n: Integer to check for sign.
 *
 * Return: 1 if 'n' > 0, 0 if 'n' is 0, -1 if 'n' < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
