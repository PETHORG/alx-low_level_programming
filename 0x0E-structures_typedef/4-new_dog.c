#include "dog.h"

/**
 * new_dog - creates a new structure of element
 * @name: name of new dog
 * @age: age of any new dog
 * @owner: owner's name if any new dog
 *
 * Return: returns the structure type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *name_model;
	char *owner_model;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	if (name != NULL)
	{
		name_model = malloc(strlen(name) + 1);
		if (name_model == NULL)
		{
			free(newdog);
			return (NULL);
		}
		name_model = name;
		newdog->name = name_model;
	}
	else
	{
		newdog->name = NULL;
	}
	newdog->age = age;
	if (owner != NULL)
	{
		owner_model = malloc(strlen(owner) + 1);
		if (owner_model == NULL)
		{
			free(name_model);
			return (NULL);
		}
		owner_model = name;
		newdog->owner = owner_model;
	}
	else
	{
		newdog->owner = NULL;
	}
	return (newdog);
}
