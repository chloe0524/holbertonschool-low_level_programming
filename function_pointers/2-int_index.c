#include <stddef.h>
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @size: look for size
 * @cmp: pointer
 * @array: pointer to array
 *
 * Return: integer or -1
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}


