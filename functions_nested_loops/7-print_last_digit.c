#include <stdio.h>
#include "main.h"
#include <time.h>
#include <stdlib.h>

/**
* print_last_digit - Entry point
* @n: is an input
* Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i = i * -1;
	}
	_putchar('0' + i);
	return (0);
}
