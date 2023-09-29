#include "main.h"

/**
 * factorial - prints the factorial of given number
 * @n: number parameter
 *
 * Return: recursive function
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
