#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returnspointer to new allocated space in memory containing copy of string given parameter
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

	a = malloc(sizeof(char));

	if (a == NULL)
		return (NULL);

	while (str[j])
	{
		a[j] = str[j];
		j++;
	}

	a[j] = 0;
	return (a);
}

