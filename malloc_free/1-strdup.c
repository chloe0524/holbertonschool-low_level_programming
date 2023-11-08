#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to new allocated space in memory,
 * containing copy of string given parameter
 *
 * @str:string to copy
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	a = malloc(sizeof(char) * i + 1);

	if (a == NULL)
		return (NULL);

	while (str[j])
	{
		a[j] = str[j];
		j++;
	}
	return (a);
}

