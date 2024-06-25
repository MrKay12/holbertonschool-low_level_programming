#include <stdio.h>
#include "main.h"

/**
 *  print_rev - fonction
 *
 *  @s: input
 *
 *  Return: always 0
 */

void print_rev(char *s)
{
	int a;
	int length = 0 ;


	for (a = 0 ; str[a] != '\0' ; a++)
	{
		for (a = length - 1; a >= 0 ; a--)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
