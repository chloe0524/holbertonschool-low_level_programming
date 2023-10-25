#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - Prints every other char of string, starting with first char
 * @str: Input string.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}

