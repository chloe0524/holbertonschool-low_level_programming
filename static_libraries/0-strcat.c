#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenate two strings.
 * @dest: The destination string to which the source will be appended.
 * @src: The source string that will be appended to the destination.
 *
 * Return: A pointer to the destination string (dest).
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

