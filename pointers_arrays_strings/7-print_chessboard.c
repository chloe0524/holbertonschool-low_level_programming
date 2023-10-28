#include <stdio.h>

/**
 * print_chessboard - function to print a chessboard
 * @plateau: array representing the chessboard
 *
 * This function takes array representing a chessboard and prints it to the
 * standard output.
 */

void print_chessboard(char (*plateau)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			putchar (plateau[i][j]);
		putchar('\n');
	}
}
