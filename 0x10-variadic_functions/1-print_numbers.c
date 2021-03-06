#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints a string containing all the arguments received
 *
 * @separator: the separator between arguments
 * @n: the number of arguments to receive
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int value;

	va_start(valist, n);

	for (i = 0; i < n ; i++)
	{
		value = va_arg(valist, int);
		printf("%d", value);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);

}
