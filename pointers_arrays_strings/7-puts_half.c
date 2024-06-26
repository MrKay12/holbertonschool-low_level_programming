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
	;


	for (a = str / 2 ; a < str ; a++)
		_putchar(str[a]);
	_putchar('\n');
}

