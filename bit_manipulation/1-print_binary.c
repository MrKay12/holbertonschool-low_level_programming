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
	if (n >> 1)
		print_binary(n >> 1);

	printf("%lu", n & 1);
}
