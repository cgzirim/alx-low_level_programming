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
	int a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = width * height;

	grid = (void *)malloc(a * sizeof(int) + 1);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = 0;
		for (j = 0; j < width; j++)
		{
			grid[j] = 0;
		}
	}
	return (grid);
}

