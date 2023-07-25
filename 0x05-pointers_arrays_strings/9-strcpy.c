#include "main.h"

/**
 * _strcpy - copies the string pointed by src to the bufferof dest
 * @dest: pointer to be copied to
 * @src: pointer that holds the string
 *
 * Return: returns the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (src[i] == '\0')
		{
			continue;
		}
		dest[i] = src[i];
	}

	return (dest);
}
