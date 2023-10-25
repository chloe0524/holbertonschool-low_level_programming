#include <stdio.h>

/**
 * swap_int - swap value a and b
 * @a: integer to be swaped with b
 * @b: integer to be swapped with a
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
