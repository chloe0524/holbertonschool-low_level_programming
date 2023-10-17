#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *
 * @c: the character to check
 *
 * Return: 1 if c lowercase, return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
