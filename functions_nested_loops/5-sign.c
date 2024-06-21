#include <stdio.h>
#include "main.h"

/**
* print_sign - Entry point
* @n: is an input
* Return: Always 0 (Success)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		printf('+');
		return (1);
	}

	else if (n == 0)
	{
		printf('0');
		return (0);
	}

	else
		printf('-');
		return (-1);
}
