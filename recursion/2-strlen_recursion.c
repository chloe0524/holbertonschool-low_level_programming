#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion  - print lenght of string
 * @s: the string to print
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	return ((1) + _strlen_recursion(s + 1));
}
