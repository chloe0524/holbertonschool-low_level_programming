#include <stdio.h>

/**
 * print_diagsums - calculate and print diagonal sums of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 *
 * This function calculates and prints the sums of the main diagonal and
 * anti-diagonal of a square matrix represented by the array 'a'
 */

void print_diagsums(int *a, int size)
{
	int i, cumul = 0;

	for (i = 0; i < (size * size); i += size + 1)
		cumul = cumul + a[i];
	printf("%d\n", cumul);

	cumul = 0;
	for (i = size ; i < (size * size); i += size - 1)
		cumul = cumul + a[i - 1];
	printf("%d\n", cumul);
}
