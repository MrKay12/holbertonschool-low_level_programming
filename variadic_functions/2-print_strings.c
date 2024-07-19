#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 *
 * @separator: pointer
 * @n: var
 *
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	char *s;

	va_start(p, n);

	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(p, char*);
		if (s == NULL)
			printf("(nil)");

		else
			printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(p);

	printf("\n");
}
