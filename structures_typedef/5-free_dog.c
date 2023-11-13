#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free the dogs
 * @d:number of dogs
 *
 */

void free_dog(dog_t *d)
{
	int i;
	int num = 0;

	for (i = 0; i < num; i++)
	{
		free(d[i].name);
		free(d[i].owner);
	}

	free(d);
}

