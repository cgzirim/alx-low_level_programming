#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees 2 dimensional array.
 * @**grid: 2d array to free.
 * @height: Height of 2d array in type int.
 */
void free_grid(int **grid, int height)
{
	int i;
	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

