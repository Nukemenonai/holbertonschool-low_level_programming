#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *  print_float - prints a float number
 *
 * @valist: list of arg types passed to the function
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 *  print_int - prints an integer
 *
 * @valist: list of arg types passed to the function
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 *  print_char - prints a char
 *
 * @valist: list of arg types passed to the function
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 *  print_str - prints a string
 *
 * @valist: list of arg types passed to the function
 */

void print_str(va_list valist)
{
	char *s;

	s = va_arg(valist, char*);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
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
	char *separator = "";
	my_sel ch[] = {
		{"s", print_str},
		{"c", print_char},
		{"f", print_float},
		{"i", print_int},
		{NULL, NULL}
	};

	int i = 0, j = 0;

	va_start(valist, format);

	while (format && format[i])
	{
		j = 0;
		while (ch[j].c)
		{
			if (format[i] == *ch[j].c)
			{
				printf("%s", separator);
				ch[j].f(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(valist);

}
