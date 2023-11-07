#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with the first n bytes of s2
 * @s1: first string to concatenate
 * @s2: second string to concatenate (up to the first n bytes).
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Return: pointer to the newly allocated concatenated string, or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *cat;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	cat = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (cat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		cat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		cat[i + j] = s2[j];
	}

	cat[i + j] = '\0';

	return (cat);
}

