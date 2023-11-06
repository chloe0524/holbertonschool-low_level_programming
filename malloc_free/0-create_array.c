#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters with a specific size
 * @size: size of the array to be created
 * @c: character to initialize the array with
 *
 * Return: pointer to the newly created array, or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int s;


	if (size == 0)
	{
		return (NULL);
	}

	b = malloc(sizeof(char) * size);

	for (s = 0; s < size; s++)
	{
		b[s] = c;
	}
	return (b);
}
