#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Entry point
* @n : input
*
* Return: Always 0.
*/

void print_to_98(int n)
{
	int a;

	if (n < 98)

		for (a = n ; a < 98 ; a++)
		{
			printf("%d, ", a);
		}

	else if (n > 98)

		for (a = n ; a > 98 ; a--)
		{
			printf("%d, ", a);
		}
	printf("98");
	printf("\n");
}
