#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of strings containing the command-line arguments
 *
 * Return: 0 for successful execution
 */
int main(int argc, char *argv[])
{
	int d = 0;
	int i, j;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[i]);
		if (j <= 0)
		{
			printf("Error\n");
			return (1);
		}
		d += j;
	}

	printf("%d\n", d);
	return (0);
}

