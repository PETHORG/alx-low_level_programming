#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of charcters of specified size
 * @size: size of array
 * @c: charcter to be printed
 *
 * Return: pointer to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size <= 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 1; i < size; i++)
	{
		array[i] = c;
	}
	array[i] = '\0';

	return (array);
}
