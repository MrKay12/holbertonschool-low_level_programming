#include <stdio.h>
#include "main.h"

/**
* time_table - Entry point
*
* Return: Always 0.
*/

void times_table(void)
{
	int row;
	int column;
	int result;
	int left;
	int right;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			result = row * column;
			left = result / 10;
			right = result % 10;

			if (row == 0)
				_putchar('0');

			else if (row * column < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + left);
				_putchar('0' + right);
			}
		}
		_putchar('\n');
	}
}
