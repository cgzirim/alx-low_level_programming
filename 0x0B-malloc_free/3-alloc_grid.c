#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer to a two
 * dimensional array of integers.
 * @width: Parameter collects width if the array.
 * @height: Parameter collects height of the array.
 * Return: Success.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (void *)malloc(height * sizeof(*grid));

	for (i = 0; i < height; i++)
	{
		grid[i] = (void *)malloc(height * sizeof(**grid));
		if (grid == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}

