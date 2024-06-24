#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar('0' + (a / 10));
				_putchar('0' + (a % 10));
			}
			_putchar('\n');
		}
	}
}
