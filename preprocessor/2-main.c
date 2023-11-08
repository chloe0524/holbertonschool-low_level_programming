#include <stdio.h>

/**
 * main -  print name of the file it was compiled from
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
