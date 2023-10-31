#include "main.h"

/**
 * _isalpha - checks if a character is a  letter
 *
 * @c: the character to check
 *
 * Return: 1 if c is a letter, return 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
