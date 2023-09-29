#include "main.h"

/**
 * _pow_recursion - prints x to the power of y
 * @x: base number
 * @y: index number
 *
 * Return: returns the power of the base
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
