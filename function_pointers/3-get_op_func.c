#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - returns pointer to calc functions
 *
 * @s: string with operation symbol
 *
 * Return: pointer to function or NULL
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}};

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
