#include <stdio.h>
#include "main.h"

/**
 * puts_half - function
 *
 * @str: pointer
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int a;
	int n = str;


	for (a = n / 2 ; a < n ; a++)
		_putchar(str[a]);
	_putchar('\n');
}

