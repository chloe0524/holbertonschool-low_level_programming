#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 *
 * @array: pointer to array
 * @size: size array
 * @action: pointer to function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}


