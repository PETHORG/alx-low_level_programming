#include <stdio.h>

/**
 * main - prints the alpabets in reverse
 *
 * Return: Always (0)
 */

int main(void)
{
	char c;
	int i;

	c = 122;

	for (i = 97; i <= 122; i++)
	{
		putchar(c);
		c -= 1;
	}
	putchar('\n');

	return (0);
}
