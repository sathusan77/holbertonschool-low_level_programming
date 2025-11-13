#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a variable of type dog_t
 * @d: pointer to struct dog_t
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

