#include <stdio.h>

/**
 * _strlen - find length
 * @s: char for lenght
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
