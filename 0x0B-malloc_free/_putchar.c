#include <unistd.h>

/**
 * _putchar - prints a single character
 * @c: character to be printed
 *
 * Return: returns charcter
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
