#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct element list
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)\n");

	if (d->owner == NULL)
		printf("owner: (nil)\n");

	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	printf("owner: %s\n", d->owner);
}
