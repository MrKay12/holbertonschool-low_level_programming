#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function
 *
 * @a: pointer
 * @size: 1st input
 *
 * Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%i, %i", sum, sum2);
	printf("\n");
}
