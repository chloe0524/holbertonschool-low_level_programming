/*
 * file name: 6-size.c
 * made by Chloe.c
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'printf sizeof'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size char: %zu byte(s)\n", sizeof(char));
	printf("Size int: %zu byte(s)\n", sizeof(int));
	printf("Size long int: %zu byte(s)\n", sizeof(long int));
	printf("Size long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size float: %zu byte(s)\n", sizeof(float));

	return (0);
}
