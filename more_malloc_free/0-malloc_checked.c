#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - funtion
 *
 * @grid: pointer
 * @height: var
 *
 *Return: Always 0
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
