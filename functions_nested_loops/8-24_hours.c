#include <stdio.h>
#include "main.h"

/**
* jack_bauer - Entry point
*
* Return: Always 0 (Success)
*/

void jack_bauer(void)
{
	int m;
	int h;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
		}
	}
}
