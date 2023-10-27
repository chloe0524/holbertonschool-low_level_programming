#include "main.h"
#include <stdio.h>

/**
 * reverse_array - content of array of integers
 * @a: Pointer to the array.
 * @n: Number of elements in array
 * return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
