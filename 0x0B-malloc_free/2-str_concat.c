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

char *str_concat(char *s1, char *s2)
{
	int i, len, j = 0;
	char *mem;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2  = "";

	len = str_len(s1) + str_len(s2);

	mem = malloc(len + 1);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < str_len(s1); i++)
	{
		mem[i] = s1[i];
	}

	for (i = str_len(s1); i < len; i++)
	{
		mem[i] = s2[j];
		j++;
	}
	mem[i] = '\0';

	return (mem);
}
