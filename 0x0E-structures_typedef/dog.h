#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A dog's basic information.
 * @name: Dog's name.
 * @owner: Owner's name.
 * @age: Dog's age.
 * Description: Longer description.
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif/* ifndef DOG_H*/

