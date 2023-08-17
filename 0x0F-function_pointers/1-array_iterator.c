#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes another function to interact with array
 * @array: array to be edited
 * @size: size of array
 * @action: function to be called which determines our result
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
}
