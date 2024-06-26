#include <stdio.h>
#include "main.h"

/**
* print_array - function
*
* @a: pointer
* @n: input
*
* Return: Always 0
*/

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		if (b < n)
		{

			printf("%i, ", a[b]);
		}

		else
			printf("%i", a[b]);
	}
	printf("\n");
}
