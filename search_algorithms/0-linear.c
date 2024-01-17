#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using
 * Linear search algorithm
 * @array: pointer to 1st element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}

