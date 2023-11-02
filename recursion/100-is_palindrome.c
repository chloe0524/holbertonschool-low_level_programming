#include <stdio.h>
#include <string.h>

/**
 * test_palindrome - Checks if a word is a palindrome.
 * @s: The input string to check.
 * @fin: The index of the last character in the string.
 * @debut: The index of the first character in the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int test_palindrome(char *s, int fin, int debut)
{
	if (debut >= fin)
	{
		return (1);
	}

	if (s[fin] == s[debut])
	{
		return (test_palindrome(s, fin - 1, debut + 1));
	}
	return (0);
}

/**
 * is_palindrome - Checks if a word is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	int longueur = strlen(s) - 1;
	int i = 0;

	return (test_palindrome(s, longueur, i));
}

