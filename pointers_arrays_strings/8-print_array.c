#include <stdio.h>
#include "main.h"

/**
 * print_array - function
 *
 * @a: 1st input
 * @b: 2nd input
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; a < n; a++)
	{
		_putchar("%d", *(arr + a));
	}
	_putchar('\n');
}
