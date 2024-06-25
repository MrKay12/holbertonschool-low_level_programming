#include <stdio.h>
#include "main.h"

/**
 * print_rev - fonction
 *
 * @s: input
 *
 * Return: always 0
 */

void print_rev(char *s)
{
	int a;
	int length = 0 ;


	for (a = 0 ; s[a] != '\0' ; a++)
		length++;

	length--;
	for (a = length - 1; a >= 0 ; a--)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
