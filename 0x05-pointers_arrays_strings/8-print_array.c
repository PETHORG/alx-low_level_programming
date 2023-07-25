#include "main.h"

/**
 * print_array - prints the element of an array seprated by a comma
 * @a: array's variable
 * @n: the size of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == n)
		{
			_putchar(a[i]);
		}
		else
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
	}
}
