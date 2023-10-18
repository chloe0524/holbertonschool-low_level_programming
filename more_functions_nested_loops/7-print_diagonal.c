#include "main.h"

/**
 * print_diagonal - prints a diagonal line of backslashes
 * @n: number of times to print the backslash
 */
void print_diagonal(int n)
{
        if (n <= 0)
        {
                _putchar('\n');
                return;
        }
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < i; j++)
                {
                        _putchar(' ');
                }
                _putchar('\\');
                _putchar('\n');
        }
}
