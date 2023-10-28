#include "main.h"


char *create_array(unsigned int size, char c)
{
	char *dyn;
	unsigned int i;

	dyn = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		dyn[i] = c;
	}

	return (dyn);
}
