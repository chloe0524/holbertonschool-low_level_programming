#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

