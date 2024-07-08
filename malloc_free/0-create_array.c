#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - funtion
 *
 * @size: 1st var
 * @c: 2nd var
 *
 *Return: Always 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	unsigned int i;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	if (size == 0)
		return (NULL);

	return (array);
}
