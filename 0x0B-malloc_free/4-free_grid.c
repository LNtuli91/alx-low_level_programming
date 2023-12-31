#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees two-dimensional array
 * @grid: 2d grid
 * @height: height of dimension grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
