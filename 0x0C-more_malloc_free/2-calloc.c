#include "main.h"

/**
 * _calloc - allocate memory and set all values to 0
 * @nmemb: size
 * @size: sizeof(datatype)
 * Return: pointer to calloc'd string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	pt = malloc(nmemb * size);
	if (pt == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)pt + i) = 0;

	return (pt);
}
