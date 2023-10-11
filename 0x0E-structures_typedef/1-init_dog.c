#include "dog.h"

/**
 * init_dog - function initializes a structure of dog elements
 * @d: struct data type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;	/*another method using pointer to struct*/
	d->age  = age;
	d->owner = owner;
}
