#include "main.h"

/**
 * clear_bit - function
 *
 *@n: var
 *@index: index
 *
 *Return: Always 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
