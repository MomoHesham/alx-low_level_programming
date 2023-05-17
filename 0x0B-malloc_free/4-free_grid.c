#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d grid
 * @grid: array of integer
 * @height: height of array
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
