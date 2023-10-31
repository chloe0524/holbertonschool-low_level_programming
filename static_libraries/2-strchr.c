#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: string to check
 * @c: character we are trying to find
 *
 * Return: pointer to first time display @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return ('\0');
}
