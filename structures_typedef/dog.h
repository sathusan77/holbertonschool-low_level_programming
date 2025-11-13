#ifndef DOG_H
#define DOG_H

/**
 * struct dog - represents a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Prototype for print_dog */
void print_dog(struct dog *d);

/* Typedef for dog_t */
typedef struct dog dog_t;

#endif

