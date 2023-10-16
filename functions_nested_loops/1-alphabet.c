#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char alphabet;


	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
		
	}
	_putchar('\n');
}
