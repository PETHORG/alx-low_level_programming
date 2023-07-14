#include <stdio.h>

/**
 * main - prints all digits of a decimal(base 10)
 *
 * Return: Always (0)
 */

int main(void)
{
	int dec;

	for (dec = 0; dec < 10; dec++)
		printf("%d", dec);
	putchar('\n');

	return (0);
}
