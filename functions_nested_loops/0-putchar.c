#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char chainput[] = "_putchar";

	for (i = 0; i <= 8; i++)
	{
		putchar(chainput[i]);
	}

	putchar('\n');
	return (0);
}
