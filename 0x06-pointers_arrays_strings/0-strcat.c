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
 * _strcat - concatenate two strings
 * @dest: main string
 * @src: string to be added
 *
 * Return: pointer to character
 */

char *_strcat(char *dest, char *src)
{
	int i, len, len2;

	len = _strlen(dest);
	len2 = _strlen(src);

	for (i = 0; i < len2; i++)
	{
		dest[len] = src[i];
		len++;
	}

	return (dest);
}
