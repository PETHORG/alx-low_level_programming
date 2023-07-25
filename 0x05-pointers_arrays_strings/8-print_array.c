#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the element of an array seprated by a comma
 * @a: array's variable
 * @n: the size of array
 */

void print_array(int *a, int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 1; i <= n; i++)
		{
			if (i < n)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
		putchar('\n');
	}
}
