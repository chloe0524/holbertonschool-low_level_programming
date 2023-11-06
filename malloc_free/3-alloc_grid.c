#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate and initialize a 2D grid of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated grid, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	a = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
	}
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	return (a);
}
