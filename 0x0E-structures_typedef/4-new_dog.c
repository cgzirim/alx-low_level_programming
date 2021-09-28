#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Cunction creates a new dog.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 * Return: New struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}

	dog->owner = malloc(sizeof(char) + (strlen(owner) + 1));
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

	dog->name = strcpy(dog->name, name);
	dog->age = age;
	dog->owner = strcpy(dog->owner, owner);

	return (dog);
}
/* Learning to use struct and typedef in C*/
