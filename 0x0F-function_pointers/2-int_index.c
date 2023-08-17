#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - allows a function to search integers and compare
 * @array: array of elements to be searched
 * @size: size of array
 * @cmp: function that does matching
 *
 * Return: return an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(*(array + i)))
			return (i);
	}

	return (-1);
}
