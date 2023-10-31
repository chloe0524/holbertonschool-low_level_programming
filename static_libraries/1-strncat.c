#include "main.h"

/**
 * _strncat - Concatenate 2 strings
 * @dest: The destination string to which the source will be appended.
 * @src: The source string that will be appended to the destination.
 * @n: The maximum number of characters to append from src.
 *
 * Return: A pointer to the resulting string (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;


	while (dest[i] != '\0')
	{
		i++;
	}


	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

