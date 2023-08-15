#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owners name
 *
 * Return: typedef dog_t of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_cpy;
	char *cpy_of_name;
	char *cpy_of_owner;

	dog_cpy = malloc(sizeof(dog_t));
	if (dog_cpy == NULL)
		return (NULL);

	dog_cpy->age = age;


	if (name != NULL)
	{
		dog_cpy->name = malloc(strlen(name) + 1);
		
		/*check memory allocation worked*/
		if (dog_cpy->name == NULL)
		{
			free(dog_cpy);
			return (NULL);
		}
		dog_cpy->name = strcpy(cpy_of_name, name);
	}
	else
	{
		dog_cpy->name = NULL;
	}

	if (owner != NULL)
	{
		dog_cpy->owner = malloc(strlen(owner) + 1);
		
		/*check memory allocation worked*/
		if (dog_cpy->owner == NULL)
		{
			free(dog_cpy);
			return (NULL);
		}
		dog_cpy->owner = strcpy(cpy_of_owner, owner);
	}
	else
	{
		dog_cpy->owner = NULL;
	}

	return (dog_cpy);
}
