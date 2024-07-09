#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - funtion
 *
 * @width: 1st var
 * @height: 2nd var
 *
 *Return: Always 0
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = (int **)malloc(height * sizeof(int *));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		s[i] = (int *)malloc(width * sizeof(int));

		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(s[j]);

			free(s);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			s[i][j] = 0;
	}

	return (s);
}
