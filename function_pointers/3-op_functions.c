#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two numbers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two numbers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two numbers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - mod two numbers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
