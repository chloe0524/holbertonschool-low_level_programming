#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted integer array
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int median = 0;
	size_t i = 0;
	size_t j = size - 1;

	if (array)
		while (i <= j)
		{
			print_array(array, i, j);

			median = (i + j) / 2;
			if (array[median] == value)
				return (median);
			if (array[median] < value)
				i = median + 1;
			else if (array[median] > value)
				j = median - 1;
			else
				return (median);
		}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @i: first element
 * @j: last element
 */
void print_array(int *array, int i, int j)
{
	printf("Searching in array: ");
	while (i <= j)
	{
		printf("%d", array[i]);
		i++;
		if (i <= j)
			printf(", ");
	}
	printf("\n");
}
