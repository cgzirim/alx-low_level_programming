#include "main.h"
#include <stdlib.h>
/**
 * array_range - Write a function that creates an array of integers.
 * @min: Less integer.
 * @max: Large integer.
 * Return: the pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int len = max - min;
	int i;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;
	return (arr);
}
