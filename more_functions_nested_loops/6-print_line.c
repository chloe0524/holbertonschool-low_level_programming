#include "main.h"

/**
 * print_line - print straight line
 * @n : integer for line
 * Return: 0
 */
void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a<= n)
		{
			_putchar('_');
			a++;
		}
	_putchar('\n');
	}
}
