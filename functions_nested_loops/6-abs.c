#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @c: the character to check
 *
 * Return: 1 if c lowercase, return 0 otherwise
 */

int _abs(int c)
{
	if (c < 0)
	{
		_putchar('-');
		_putchar('0' - c);
	}
	else
	{
		_putchar('0' + c);
	}
	return (c);
}

