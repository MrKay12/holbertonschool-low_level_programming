#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Function
 *
 * @args: var
 */

void print_char(va_list args) { printf("%c", va_arg(args, int)); }

/**
 * print_int - Function
 *
 * @args: var
 */

void print_int(va_list args) { printf("%d", va_arg(args, int)); }

/**
 * print_float - Function
 *
 * @args: var
 */

void print_float(va_list args) { printf("%f", va_arg(args, double)); }

/**
 * print_string - Function
 *
 * @args: var
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	printf("%s", str ? str : "(nil)");
}

/**
 * print_all - Function
 *
 * @format: var
 */

void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0, j;
	char *s = "";

	fm fmt[] = {
	{'c', print_char}, {'i', print_int},
	{'f', print_float}, {'s', print_string}, {'\0', NULL}
	};

	va_start(p, format);

	while (format && format[i])
	{
		j = 0;
		while (fmt[j].type)
		{
			if (format[i] == fmt[j].type)
			{
				printf("%s", s);
				fmt[j].f(p);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(p);
	printf("\n");
}
