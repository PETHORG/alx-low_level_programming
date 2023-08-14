#include "dog.h"

/**
 * init_dog - initializes values to the variables in struct dog
 * @d: a pointer to struct dog
 * @name: string containing name of dog
 * @age: age of dog
 * @owner: string cotaining name of owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
