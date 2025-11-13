#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to a struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: assigns the values of name, age, and owner
 *		to the members of the struct dog pointed to by d.
 */
void init_dog(dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

