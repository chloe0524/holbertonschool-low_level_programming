#include "main.h"

/**
 * _isdigit - print digit of c
 *@c: integer with digit printed
 * Return: 1 and 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
