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

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height ; i++)
		free(grid[i]);

	free(grid);
}
