#include <stdio.h>
#include <string.h>

/**
 * wildcmp - Compare two strings using wildcard characters.
 *
 * This function compares two strings, 'mot' and 'a_comparer'
 *
 * @mot: The source string to compare.
 * @a_comparer: The string to compare with, may contain '*'²:wq
 *
 *
 * Return: 1 if the strings match, 0 otherwise.
 */


int wildcmp(char *mot, char *a_comparer)
{
	int ctr = 0, flag = 0;

	if (*mot == '\0' && *a_comparer == '\0')
		return (1);

	if (*mot == *a_comparer)
		return (wildcmp(++mot, ++a_comparer));

	if (*a_comparer == '*')
	{
		while (*a_comparer == '*')
			a_comparer++;

		if (*a_comparer == '\0')
			return (1);

		while (*(mot + ctr) != '\0')
		{
			if (*(mot + ctr) == *a_comparer)
				flag = ctr;
			ctr++;
		}
		if (flag > 0)
			mot = mot + flag;
		return (wildcmp(mot, a_comparer));
	}

	return (0);
}

