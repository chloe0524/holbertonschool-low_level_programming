#include "main.h"

/**
 * print_square - print square
 *  * Return: 0
 */
void print_square(int size) 
{
	int i, j;
	
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1); j++)
			{	
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
