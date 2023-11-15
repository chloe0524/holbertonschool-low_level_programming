#ifndef VAR_FUNCTIONS_H
#define VAR_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct format
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} format_t;

#endif
