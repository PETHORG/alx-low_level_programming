#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with delimiters
 * @seperator: a string of char that seperates the printed number
 * @n: number of integers passed to the functions
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vap;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";

	va_start(vap, n);

	for (; i < n; i++)
	{
		if ((i + 1) == n)
		{
			printf("%d", va_arg(vap, int));
			putchar('\n');
		}
		else
		{
			printf("%d", va_arg(vap, int));
			printf("%s", separator);
		}
	}
	va_end(vap);
}
