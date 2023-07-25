#include "main.h"

/**
 * _strcpy - copies the string pointed by src to the buffer pointed to by dest
 * @dest: pointer to be copied to
 * @str: pointer that holds the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
