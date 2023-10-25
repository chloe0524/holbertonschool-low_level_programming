#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: input string
 * Return: void
 */

void puts2(char *str)
{
	char i;

	for(i = 0; i < strlen (str); i+=2)
	{
		puts2(i += str[i]);
	}
}
