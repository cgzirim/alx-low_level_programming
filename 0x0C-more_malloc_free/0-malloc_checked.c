#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Function allocates memory using malloc.
 * @b: Parameter collects size of memory.
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *a;
	a = (void *)malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

