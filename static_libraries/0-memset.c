#include "main.h"
/**
 * *_memset - fill memory with constant byte
 *@s: memory area
 *@b: constant byte
 *@n: n bytes from memory
 *Return: memory area pointed to
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
