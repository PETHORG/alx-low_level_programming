#include "main.h"

/**
 * print_square - prints square of prefered sizes
 * @size: size of square
 */

void print_square(int size)
{
	if (size > 0)
	{
		for (i = 1; i <= sizes; i++)
		{
			for (j = 1; j <= sizes; j++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
	else
	{
		_putchar('\n');
	}
}
