#include "main.h"
#include <stdio.h>


/**
 * times_table -  prints 9 times table, starting with 0
 * @i , @j to multiply
 * Return: nothing
 */
void times_table(void)
{
	int i, j;

	for (i = 0 ; i <= 9 ; i++)
	{
		printf("%d, ", i * 0);
		for (j = 1 ; j <= 8 ; j++)
		{
			printf("%2d, ", i * j);
		}
		printf("%2d\n", i * j);
	}
}
