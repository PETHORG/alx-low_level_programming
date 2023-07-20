#include "main.h"

/**
 * print_line - prints line
 * @n: is the number of line to be printed
 */

void print_line(int n)
{
	int lncounter;

	if (n > 0)
	{
		for (lncounter = 1; lncounter <= n; lncounter++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
