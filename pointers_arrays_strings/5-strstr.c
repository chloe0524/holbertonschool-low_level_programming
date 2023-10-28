#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		int i = 0;
		int j = 0;

		while (needle[j] && (haystack[i] == needle[j]))
		{
			i++;
			j++;
		}

		if (!needle[j])
		{
			return (haystack);
		}

		haystack++;
	}

	return ('\0');
}

