#include <stdio.h>
#include "main.h"

/**
 * _puts - fonction
 *
 * @str: inputs
 *
 * Return: Always 0
 */

void _puts(char *str);
{
	int a;

	for (a = 0; str[a] != '\0' ; a++)
	{
	       _putchar(str[a]);
	}
	_putchar('\n');
}	
