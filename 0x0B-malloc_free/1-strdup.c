#include "main.h"

/**
 * str_len - numbers the length of a string
 * @str: string to be counted
 *
 * Return: the count of the string's length
 */

int str_len(char *str)
{
	int count, i;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * _strdup - prints a duplicate string
 * @str: string to be duplicated
 *
 * Return: duplicate string
 */

char *_strdup(char *str)
{
	char * str_cpy;
	int i;

	if (str == NULL)
		return (NULL);

	str_cpy = malloc(str_len(str) + 1);

	if (str_cpy == NULL)
		return (NULL);

	for (i = 0; i < str_len(str); i++)
	{
		str_cpy[i] = str[i];
	}

	str_cpy[i] = '\0';
	return (str_cpy);
}
