#include "main.h"

/**
 * print_line - print straight line
 * @n : integer for line
 * Return: 0
 */
void print_line(int n)
{
	if (n <= 0)
	n = 1;
	while (n-- > 0)
	{
	_putchar('_');
	}
	_putchar('\n');
}
