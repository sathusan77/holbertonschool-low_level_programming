#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the information of a struct dog
 * @d: pointer to the struct dog to print
 *
 * Description: prints the name, age, and owner of the dog.
 * If an element is NULL, prints (nil) instead.
 * If d is NULL, prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

