#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - Functionn prints a struct dog.
 * @d: Pointer to struct dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil\n");
	else
	{
		if (d->name == NULL)
			printf("Name: nil\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

