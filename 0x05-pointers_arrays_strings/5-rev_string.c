#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: pointer to a char
 */

void print_rev(char *s)
{
	int i, count, j;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}

	count--;

	for (j = 0; count >= 0; j++)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
