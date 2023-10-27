#include "main.h"

/*
 * *_strchr - Locate character in a string
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * description: function searches for first occurrence of the character 'c' in
 * the string 's'. If the character is found, return a pointer to the
 * first occurrence of 'c' in 's'; otherwise, it returns NULL.
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
