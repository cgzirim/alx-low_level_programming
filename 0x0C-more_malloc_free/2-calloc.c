#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Function allocates memory for an array, using malloc.
 * @nmemb: Number of blocks.
 * @size: Size of each element in bytes.
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = (int *)malloc(nmemb * sizeof(size));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i <(size * nmemb); i++)
		ar[i] = 0;

	arr = (void *)ar;

	return (arr);
}

