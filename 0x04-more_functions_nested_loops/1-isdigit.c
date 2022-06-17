#include "main.h"

/**
 * _isdigits checks for charcters that are digits
 * @c: characters to check
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
