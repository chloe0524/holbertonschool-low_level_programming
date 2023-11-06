#include "main.h"
#include <stdlib.h>

/*
 *
 *
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	a = malloc(height * sizeof(int *));

	for(i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
	}
	if (a == NULL)
	{
                free (a);
                return (NULL);
	}
	return (a);
}
