#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

#define DEBUG_CC 1

/**
 * main - calculates two numbers given a string
 *
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: 0 on success.
 */
int main(int ac, char *av[])
{
	int a;
	int b;
	int rslt;
	int (*f)(int, int);

#if DEBUG_CC 

	int i;

	printf("argc = %d\n", ac);

	for (i = 0; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, av[i]);
	}
#endif /*DEBUG_CC*/

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(av[1]);
	b = atoi(av[3]);
	f = get_op_func(av[2]);

	if (f == NULL || av[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((av[2][0] == '/' || av[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	rslt = f(a, b);

	printf("%d\n", rslt);
	return (0);
}
