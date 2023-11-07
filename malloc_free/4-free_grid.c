#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D grid of integers.
 * @grid: pointer to grid
 * @height: The height of the grid.
 *
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
