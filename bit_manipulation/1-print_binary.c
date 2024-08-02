#include "main.h"

/**
 * binary_to_uint - function
 *
 *@b: pointer
 *
 *Return: Always 0
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(n) * 8 - 1;
	int i = 1;

	while (b >= 0)
	{
		if ((n >> b) & 1)
		{
			printf("1");
			i = 0;
		}

		else if (!i)
			printf("0");

		b--;
	}

	if (i)
		printf("0");
}
