#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *			Linear search.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in array.
 * @value: Targer value to search for.
 *
 * Return: If target value was found - 1. Otherwise - -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL && value)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
