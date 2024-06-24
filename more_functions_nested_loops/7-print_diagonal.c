#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print
 *
 * @n : input
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;
	while ((a < n) && (n > 0))
	{
		for (b = 0 ; a > b ; b++)
			_putchar(' ');
		_putchar('\\');
		a++;

		if (a != n)
		_putchar('\n');

	}
	_putchar('\n');
}
