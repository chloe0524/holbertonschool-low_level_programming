#include <stdio.h>
#include "function_pointers"
/**
 * print_name - prints name using f
 *
 * @name: name to print
 * @f: function to use
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}
