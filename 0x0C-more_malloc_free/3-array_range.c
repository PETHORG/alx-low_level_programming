#include "main.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *pt;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	pt = malloc(sizeof(int) * n);
	if (pt == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		pt[i] = min++;

	return (pt);
}
