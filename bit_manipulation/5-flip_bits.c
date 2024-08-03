#include "main.h"

/**
 * flip_bits - function
 *
 *@n: var
 *@m: var
 *
 *Return: Always 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int j = 0;

	while (i)
	{
		j += i & 1;
		i >>= 1;
	}

	return (j);
}
