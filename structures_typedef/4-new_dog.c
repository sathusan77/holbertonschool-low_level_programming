#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * str_dup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or NULL
 */
char *str_dup(char *str)
{
	char *dup;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	dup = malloc(len);
	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);
	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = str_dup(name);
	d->owner = str_dup(owner);

	if ((name != NULL && d->name == NULL) ||
	    (owner != NULL && d->owner == NULL))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;
	return (d);
}

