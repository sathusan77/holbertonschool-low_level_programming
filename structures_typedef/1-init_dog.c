#include "dog.h"

/**
 * init_dog - initialise un chien
 * @d: pointeur vers la structure dog
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Cette fonction assigne les valeurs passées en
 *              paramètres aux champs de la structure dog.
 */
void init_dog(dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;

    d->name = name;
    d->age = age;
    d->owner = owner;
}

