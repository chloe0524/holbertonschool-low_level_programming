#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 *
 * @c: the character to check
 *
 * Return: 1 if c is a uppercase letter, return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
