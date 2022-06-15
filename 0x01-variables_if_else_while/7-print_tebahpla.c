#include <stdio.h>

/**
 * main - Print 0 to 9 but in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
