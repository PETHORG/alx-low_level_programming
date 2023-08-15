#include "dog.h"

/**
 * free_dog - frees dog heap memory
 * @d: struct of type dog_t
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name) /* free members of struct that exist */
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
