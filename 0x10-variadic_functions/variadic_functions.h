#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct select - struct of charactaer and it's respective function
 *
 * @c: the char entered
 * @f: its relative pointer to function
 */

typedef struct select
{
	char *c;
	void (*f)(va_list valist);

} my_sel;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
