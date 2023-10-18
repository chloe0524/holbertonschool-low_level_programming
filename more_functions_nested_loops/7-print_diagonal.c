#include "main.h"

/**
 * print_diagonal - print diagonal
 * @limit : max
 * Return: nothing
 */

void print_diagonal(int limit)
{
	int i, j;

	if (limit < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0 ; i < limit ; i++)
	{
		for (j = 0 ; j < i ; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
