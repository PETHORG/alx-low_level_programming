#include "variadic_functions.h"

/**
 * print_strings - prints strings using variadic function
 * @separator: strings that seprates words
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vap;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";
	va_start (vap, n);

	for (; i < n; i++)
	{
		if ((i + 1) == n)
		{
			printf("%s", va_arg(vap, char *));
			putchar('\n');
		}
		else
		{
			printf("%s", va_arg(vap, char *));
			printf("%s", separator);
		}
	}
	va_end (vap);
}
