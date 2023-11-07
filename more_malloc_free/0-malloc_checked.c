#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: number of bytes
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b));

		if (p == NULL)
		{
			exit(98);
		}
	return (p);
}

