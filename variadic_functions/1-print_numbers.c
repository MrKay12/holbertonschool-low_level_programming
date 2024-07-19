#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function
 *
 * @separator: pointer
 * @n: var
 *
 * Return: Always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0 ; i < n ; i++)
		printf("%d", va_arg(p, int));

	if (separator != NULL && i < n - 1)
		printf("%s", separator);

	va_end(p);

	printf("\n");
}
