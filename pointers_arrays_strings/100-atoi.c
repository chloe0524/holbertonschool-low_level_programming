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

/**
 * main - Entry point of program.
 * Return: 0
 */

int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("	------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("	+     +   -   -98 Battery Street; San Francisco, CA 94111-USA	");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
