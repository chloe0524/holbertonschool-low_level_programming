#include "main.h"

/**
 * _strspn - length of a prefix substring made of chars in accept
 *
 * @s: string to search.
 * @accept: characters to include in the substring.
 *
 * Return: number of bytes in initial segment made of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			break;

		i++;
	}

	return (i);
}

