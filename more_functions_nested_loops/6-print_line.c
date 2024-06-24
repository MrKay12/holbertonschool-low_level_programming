#include <stdio.h>
#include "main.h"

/**
 * print_line - print
 *
 * @n : input
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
