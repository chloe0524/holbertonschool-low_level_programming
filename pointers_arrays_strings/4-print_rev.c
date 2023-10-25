#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: char for lenght
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}


	_putchar('\n');
}
