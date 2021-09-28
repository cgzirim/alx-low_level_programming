#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Function frees dog.
 * @d: Struct of dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

