#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * display_char - Display a character.
 * @va: va_list containing the character to be displayed.
 *
 * Description: function takes a va_list containing a character
 * and prints it to the standard output.
 */

void display_char(va_list va)
{
	printf("%c", va_arg(va, int));
}

/**
 * display_int - Display an integer.
 * @va: va_list containing the integer to be displayed.
 *
 * Description: function takes a va_list containing an integer
 * and prints it to the standard output.
 */

void display_int(va_list va)
{
	printf("%d", va_arg(va, int));
}

/**
 * display_float - Display a floating-point number.
 * @va: va_list containing the floating-point number to be displayed.
 *
 * Description: function takes a va_list containing a double value
 * and prints it to the standard output.
 */

void display_float(va_list va)
{
	printf("%f", va_arg(va, double));
}

/**
 * display_string - Display a string.
 * @va: A va_list containing the string to be displayed.
 *
 * Description: This function takes a va_list containing a string
 * and prints it to the stdout if string = NULL prints "(nil)"
 */

void display_string(va_list va)
{
	char *la_chaine = va_arg(va, char *);
	(la_chaine != NULL) ? printf("%s", la_chaine) : printf("(nil)");
}

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
	va_list liste_parametre;
	int i = 0;
	int position = 0;

	tdisplay display[] = {
		{'c', display_char},
		{'i', display_int},
		{'f', display_float},
		{'s', display_string},
		{'\0', NULL}
	};

	va_start(liste_parametre, format);

	while (format[i])
	{
		position = 0;
		while (display[position].format_type != format[i] &&
			display[position].format_type != '\0')
			position++;

		if (display[position].format_type != '\0')
		{
			display[position].fdisplay(liste_parametre);
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}

	va_end(liste_parametre);
	putchar('\n');
}
