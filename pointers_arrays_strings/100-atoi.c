#include <stdio.h>

#include <stdio.h>

/**
 * _atoi - Converts a string to an integer, considering negative values.
 * @nombre: The input string to convert.
 * Return: The converted integer value, or 0 if conversion fails.
 */

int _atoi(char *nombre)
{
	int i;
	int negatif = 1;
	int entier = 0;
	int traitementfait = 0;

	for (i = 0; nombre[i] != 0; i++)
	{
		if (nombre[i] == '-')
			negatif = negatif * -1;

		if (nombre[i] >= '0' && nombre[i] <= '9')
		{
			entier = (entier * 10) + nombre[i] - '0';
			traitementfait = 1;
		}
		else if (traitementfait == 1)
			break;
	}

	entier = entier * negatif;
	return (entier);
}
