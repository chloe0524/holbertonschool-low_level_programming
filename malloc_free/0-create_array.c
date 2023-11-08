#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars and initializes it with a char
 *
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(sizeof(char) * size);
	
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}

	return (s);
}
