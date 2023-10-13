#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{
	va_list vap;
	unsigned int sum = 0, i = 0;

	if (n == 0)
		return (0);

	va_start (vap, n);

	for (; i < n; i++)
	{
		sum += va_arg(vap, int);
	}

	va_end (vap);
	return (sum);
}
