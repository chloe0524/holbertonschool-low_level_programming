#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
