#include <stdio.h>

/**
 * print_name - prints name using f
 *
 * @name: string
 * @f: function to use
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);

}
