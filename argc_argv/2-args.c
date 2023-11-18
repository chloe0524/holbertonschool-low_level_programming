#include <stdio.h>
/**
 * main - entry point of the program
 * @argc: number of command-line arguments
 * @argv: array of strings containing the command-line arguments
 *
 * Return: 0 for successful execution.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
