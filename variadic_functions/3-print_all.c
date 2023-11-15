#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - can print anything
 *
 * @format: define format
 *
 * Descritption: This function can print anything.
 * Return: void
 *
 */

void print_all(const char * const format, ...)
{
	va_list ptr_parametre;
	int i = 0;
	char *si_cest_une_chaine;

	va_start(ptr_parametre, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr_parametre, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr_parametre, int));
				break;
			case 'f':
				printf("%f", va_arg(ptr_parametre, double));
				break;
			case 's':
				si_cest_une_chaine = va_arg(ptr_parametre, char *);
				if (si_cest_une_chaine == NULL)
					printf("(nil)");
				else
					printf("%s", si_cest_une_chaine);
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i] != 0x00)
			printf(", ");
	}
	va_end(ptr_parametre);
	putchar('\n');
}
