#include "dog.h"
#include <stdio.h>
/**
 * free_dog - Function frees dog.
 * @d: Struct of dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

