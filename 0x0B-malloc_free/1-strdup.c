#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * _strdup - returns a pointer an dynamically allocated memory
 * @str: string copied to be pointed too
 *
 * Return: pointer to char
 */

char *_strdup(char *str)
{
	char *str_cpy;

	if (str == NULL)
		return (NULL);

	str_cpy = malloc(_strlen(str));

	if (str_cpy == NULL)
		return (NULL);

	_strcpy(str_cpy, str);

	return (str_cpy);
}
