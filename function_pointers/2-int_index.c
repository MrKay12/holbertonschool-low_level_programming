#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function
 *
 *@array: 1st pointer
 *@cmp: 2nd pointer
 *@size : var
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
