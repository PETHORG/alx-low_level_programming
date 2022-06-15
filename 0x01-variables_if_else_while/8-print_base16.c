#include <stdio.h>

/**
 * main - print hexadecimal numbers, i.e numbers in base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 56; i++)
	{
		putchar(i);
	}

	for (i =  97; i < 103; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
