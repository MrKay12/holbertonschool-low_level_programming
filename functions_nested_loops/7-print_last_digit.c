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

	srand(time(0));
	n =  rand() - RAND_MAX / 2;

	i = n % 10;

	_putchar(i);
	return (0);
}
