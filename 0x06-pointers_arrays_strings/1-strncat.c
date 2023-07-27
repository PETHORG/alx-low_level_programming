#include "main.h"
/**
 * _strlen - counts the length of string
 * @s: string to be counted
 *
 * Return: length of string (len)
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i= 0; s[i] != '\0'; i++)
	{
		len += 1;
	}

	return (len);
}

/**
 * _strncat - concatenate two strings, with n bytes added
 * @dest: main string
 * @src: string to be added
 * @n: number of bytes
 *
 * Return: pointer to string(dest)
 */

char *_strncat(char *dest, char *src, int n);
{
	int i, len, len2;

	len = _strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
