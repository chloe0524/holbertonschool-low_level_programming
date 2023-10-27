#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - Convert a string to uppercase
 * @a: Pointer to string
 * Return: Pointer modified string
 */


char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}

	return (a);
}
