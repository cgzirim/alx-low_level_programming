#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Function reallocates a memory block using malloc.
 * @ptr: Pointer to the memory previously allocated
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes of the new memory block.
 * Return: Pointer to new memory block.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *ptr1;
	unsigned int i;

	/*ptr = malloc(old_size);*/

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
		if (!new_ptr)
		{
			free(ptr);
			return (NULL);
		}

	if (!ptr)
		return (new_ptr);

	ptr1 = (char *)ptr;

	for (i = 0; i < new_size; i++)
		new_ptr[i] = ptr1[i];

	free(ptr);
	return ((void *)new_ptr);
}

