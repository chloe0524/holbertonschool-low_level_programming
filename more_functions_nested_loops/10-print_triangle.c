#include "main.h"

/**
 * print_triangle - print triangle #
 * @size : max
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 1 ; i <= size ; i++)
	{
		for (j = size - i ; j > 0 ; j--)
		{
			_putchar(' ');
		}
		for (k = 1 ; k <= i ; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
