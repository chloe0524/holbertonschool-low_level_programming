#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two string
 *
 * @s1: the first string
 * @s2: the string to add to @s1
 *
 * Return: pointer that points to a newly allocated memory space
 * containing @s1, followed by contents of @s2,
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	size_t i;
	char *r;
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);


	r = (char *)malloc(sizeof(char) * (len1 + len2 + 1));


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (r == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		r[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		r[len1 + i] = s2[i];
	}

	r[len1 + len2] = '\0';

	return (r);
}

