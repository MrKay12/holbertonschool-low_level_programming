#include <stdio.h>
#include "main.h"

/**
* add - Entry point
* @n : input
* 
* Return: Always 0.
*/

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d, ", n);
		}

		else if (n < 98; n--)
		{
			printf("%d, ", n);
		}

		else
			printf("%d, ", n);
	}
}
