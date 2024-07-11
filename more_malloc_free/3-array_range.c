#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 *
 * @min: 1st input
 * @max: 2nd input
 *
 * Return: Always 0
 */

int *array_range(int min, int max)
{
	int *s;
	int i;
	int j;

	if (min > max)
		return (NULL);

	j = max - min + 1;

	s= malloc(j * sizeof(int));

	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < j ; i++)
		s[i] = min + i;

	return (s);
}
