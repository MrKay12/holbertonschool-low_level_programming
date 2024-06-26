#include <stdio.h>
#include "main.h"

/**
 * puts_half - function
 *
 * @str: input
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int a;
	int length = 0;
	int start = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		length++;

	if ((length % 2) == 1)
		start = (length + 1) / 2;

	else
		start = length / 2;

	for (a = start ; a < length ; a++)
		_putchar(str[a]);
	_putchar('\n');


}
