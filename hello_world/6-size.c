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
        printf("\nSize char:  %zu byte", sizeof(char));
	printf("\nSize int: %zu byte", sizeof(int));
	printf("\nSize long int: %zu byte", sizeof(long int));
	printf("\nSize long longiint: %zu byte", sizeof(long long int));
	printf("\nSize float: %zu byte", sizeof(float));

        return (0);
}
