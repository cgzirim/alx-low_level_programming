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
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	filler = arr;

	for (i = 0; i < (nmemb * size); i++)
		filler[i] = '\0';

	return (arr);
}

