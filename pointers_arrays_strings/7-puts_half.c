#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string.
 * @str: Input string.
 */

void puts_half(char *str)
{
	int i;
	int halflen;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		halflen = len / 2;
	}
	else
	{
		halflen = (len + 1) / 2;
	}

	for (i = halflen; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
