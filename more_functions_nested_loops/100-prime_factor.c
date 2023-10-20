#include <math.h>
#include <stdio.h>
/**
 * main - main
 * Return: nothing
 */

int main(void)
{
	int i;
	long number = 612852475143;

	for (i = (int) sqrt(number); i > 2; i++)
	{
		if (i >= 10)

		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}
