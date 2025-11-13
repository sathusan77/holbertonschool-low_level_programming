#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Description: prints the name, age and owner of the dog.
 *	If an element is NULL, prints (nil) instead.
 *	If d is NULL, prints nothing.
 */
void print_dog(dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %.6f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}

