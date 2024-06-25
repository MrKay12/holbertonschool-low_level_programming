#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: input
 *
 * Return: always 0
 */

void print_triangle(int size)
{
	int a;
	int b;

	for (a = 1 ; a <= size ; a++)
	{
		b = size - a;
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		for (b = a ; b > 0 ; b--)
			_putchar('#');
		if (a != size)
			_putchar('\n');
	}
	_putchar('\n');
}
