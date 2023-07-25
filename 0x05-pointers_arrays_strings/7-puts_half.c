#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: a pointer to char
 *
 * Return: number of char
 */

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		count += 1;
	}

	return (count);
}

/**
 * puts_half - prints the second half of a string
 * @str: pointer to char
 */

void puts_half(char *str)
{
	int len, div, i;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		div = len / 2;

		for (i = div; str[i] != '\0'; i++)
		{
			_putchar(str[div]);
			div++;
		}
	}
	else
	{
		div = len / 2;
		div++;

		for (i = div; str[i] != '\0'; i++)
		{
			_putchar(str[div]);

			div += 1;
		}
	}
	_putchar('\n');
}
