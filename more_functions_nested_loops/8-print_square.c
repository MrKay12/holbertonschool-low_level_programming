#include <stdio.h>
#include "main.h"

/**
 * print_square - check the code
 *
 * @size : input
 * Return: Always 0.
 */

void print_square(int size)
{
	int a;
	int b;

	for (a = 1 ; a <= size ; a++)
	{
		for (b = 0 ; b < size ; b++)
			_putchar('#');

		if (a != size)
			_putchar('\n');
	}
	_putchar('\n');
}
