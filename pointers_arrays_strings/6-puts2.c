#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts2 - Prints every other char of string, starting with first char
 * @str: Input string.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
