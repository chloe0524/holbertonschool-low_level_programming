#include "main.h"
#include <stdlib.h>

/*
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

		if (p == NULL)
		{	
			exit(98);	
		}
	return (p);
}

