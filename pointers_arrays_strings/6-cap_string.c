#include <stdio.h>
#include "main.h"

/**
 * cap_string - Capitalize first letter of each word in a string.
 * @string: The input string to be modified.
 *
 * Return: pointer to modified string
 */
char *cap_string(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (string[i] >= 'a' && string[i] <= 'z')
				string[i] = string[i] - 32;
		}
		if (string[i] == ' ')
		{
			++i;
			if (string[i] >= 'a' && string[i] <= 'z')
			{
				string[i] = string[i] - 32;
			}
		}
		else
		{
			if (string[i] >= 'A' && string[i] <= 'Z')
				string[i] = string[i] + 32;
		}
	}
	return (string);
}

