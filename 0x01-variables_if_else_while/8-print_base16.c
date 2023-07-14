#include <stdio.h>

/**
 * main - prints hexadecimal digits, and its alphabet in lowercase
 *
 * Return: Always (0)
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 97; c <= 102; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
