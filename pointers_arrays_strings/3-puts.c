#include "main.h"

/**
 * _puts - print the string
 * @str: char to print string
 * Return: nothing
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
