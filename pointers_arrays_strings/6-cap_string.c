#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @c: string to capitalize
 *
 * Return: capitalized string
 */

char *cap_string(char *c)
{
	int i = 0;
	int j;
	char headache[] = " \n\t,;.!?\"(){}";


	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;

	for (; c[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (c[i] == headache[j])
			{
				if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
					c[i + 1] -= 32;
			}
		}
	}

	return (c);
}

