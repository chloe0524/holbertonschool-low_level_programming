#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * des: Find and print largest prime factor of
 * 612852475143
 * Return: 0
 */
int main(void)
{
	int j;
	long num = 612852475143;

	for (j = (int) sqrt(num); j > 2; j++)
	{
		if (num % j == 0)
		{
			printf("%d\n", j);
			break;
		}
	}

	return (0);
}
