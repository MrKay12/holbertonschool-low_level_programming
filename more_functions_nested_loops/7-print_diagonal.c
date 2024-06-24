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
	while (n > 0)
	{
		_putchar(n + '\');
		n--;
	}
	_putchar('\n')
}
