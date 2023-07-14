#include <stdio.h>

/**
 * main - prints all digits of base 10 using putchar
 *
 * Return: Always (0)
 */

int main(void)
{
	int dec;

	for (dec = 48; dec <= 57; dec++)
		putchar(dec);
	putchar('\n');

	return (0);
}
