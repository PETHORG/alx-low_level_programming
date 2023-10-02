#include "main.h"

/**
 * _strncpy - copies strings of n bytes
 * @dest: the pointer to destination array where the content is to be copied
 * @src: the string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
