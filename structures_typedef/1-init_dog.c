#include "dog.h"

/**
 * init_dog - initialise un chien
 * @d: pointeur vers la structure dog
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Cette fonction initialise les champs name, age et owner
 *              d'une structure dog pointée par d.
 */
void init_dog(dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}

