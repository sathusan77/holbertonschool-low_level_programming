#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: pointer to the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: assigns the values passed as parameters to
 *              the members of the struct dog.
 */
void init_dog(dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}

