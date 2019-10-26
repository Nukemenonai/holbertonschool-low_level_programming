#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"

void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

void print_str(va_list valist)
{
	printf("%s", va_arg(valist, char *));
}

/**
 *  print_all - prints all
 *
 * @format: list of arg types passed to the function
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	va_start(valist, format);
	my_sel ch[] = {
		{"s", print_str},
		{"c", print_char},
		{"f", print_float},
		{"i", print_int}
	};

	int i = 0, j = 0;

	while (format[i] != '\0')
	{
		j = 0;
		while(j < 4)
		{
			if (format[i] == *ch[j].c)
			{
				ch[j].f(valist);
				if(i < format[(i + 1)])
				printf(", ");
			}
			j++;
		}
		i++;
	}

	printf("\n");

}
