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
 * str_concat - concatenates two strings using allocated memory
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	int i, len_count;
	char *cncat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_count = 0;
	cncat = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));

	if (cncat == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
	{
		cncat[i] = s1[i];
		len_count++;
	}

	for (i = 0; i < _strlen(s2); i++)
	{
		cncat[len_count] = s2[i];
		len_count++;
	}

	return (cncat);
}
