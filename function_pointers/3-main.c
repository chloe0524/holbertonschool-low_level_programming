#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates two numbers given a string
 *
 * @arc: number of arguments
 * @arv: array of argument strings
 *
 * Return: 0 on success.
 */
int main(int arc, char *arv[])
{
	int a, b;
	int rslt;
	int (*f)(int, int);

	if (arc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(arv[1]);
	b = atoi(arv[3]);
	f = get_op_func(arv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*arv[2] == '/' || *arv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);

	}
	rslt = f(a, b);

	printf("%d\n", rslt);
	return (0);
}
