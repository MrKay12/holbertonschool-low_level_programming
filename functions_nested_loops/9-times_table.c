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

	for (column = '0'; column <= '9'; column++)
	{
		for (row = '0'; row <= '9'; row++)
		{
			result = row * column;
			left = result / 10;
			right = result % 10;

			if (row * column < 10)
			{
				_putchar('0' + right);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(left);
				_putchar(right);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
