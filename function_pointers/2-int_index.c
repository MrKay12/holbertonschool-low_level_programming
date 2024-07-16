#include <stddef.h>
#include "function_pointers.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	for (i = 0 ; i < size ; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	return (-1);
}
