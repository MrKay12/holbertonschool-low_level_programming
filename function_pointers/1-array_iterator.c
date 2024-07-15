#include <stddef.h>
#include "function_pointers.h"

/**
 *array_iterator - function
 *
 *@:size: var
 *@array: 1st pointer
 *@action: 2nd pointer
 *
 *Return: Always 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
