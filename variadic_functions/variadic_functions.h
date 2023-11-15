#ifndef VAR_FUNCTIONS_H
#define VAR_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct tdisplay - Format specifier and display function pair
 * @format_type: Format specifier character ('c', 'i', 'f', 's')
 * @fdisplay: Pointer to the display function
 */
typedef struct tdisplay
{
	char format_type;
	void (*fdisplay)(va_list);
} tdisplay;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VAR_FUNCTIONS_H */
