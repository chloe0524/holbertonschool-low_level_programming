#include "main.h"
#include <string.h>

/**
 * _strcmp - Compare two strings.
 * @s1: first string to compare.
 * @s2: second string to compare.
 *
 * Return: 0 if the strings are equal.
 *   .
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
