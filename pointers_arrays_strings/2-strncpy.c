#include "main.h"

/**
 * _strncpy - Copy a string with a max length
 *
 * @dest: The destination string where copy will be stored.
 * @src: The source string to copy from.
 * @n: ma number of characters to copy from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	
	for( i = 0 ; src[i] !=0 && i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

