#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog or NULL if failed
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n_copy, *o_copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	n_copy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n_copy == NULL)
	{
		free(d);
		return (NULL);
	}

	o_copy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (o_copy == NULL)
	{
		free(n_copy);
		free(d);
		return (NULL);
	}

	_strcpy(n_copy, name);
	_strcpy(o_copy, owner);

	d->name = n_copy;
	d->age = age;
	d->owner = o_copy;

	return (d);
}

