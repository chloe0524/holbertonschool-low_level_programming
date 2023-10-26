#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string
 *@dest: string
 *@src: string
 *Return: dest
 */

char *_strcpy(char *dest,  char *src)
{
	int i;

	while ((*src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);

}
