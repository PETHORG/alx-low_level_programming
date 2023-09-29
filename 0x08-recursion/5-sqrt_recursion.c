#include "main.h"

/**
 * _sqr - checks the square of one number
 * @n: number whose square root we are finding
 * @sqr: square of a number
 *
 * Return: a direct reursive call
 */

int _sqr(int n, int sqr)
{
	if (n == sqr * sqr)
		return (sqr);
	if (n < sqr * sqr)
		return (-1);

	return (_sqr(n, sqr + 1));
}

/**
 * _sqrt_recursion - finds the square root of a number n
 * @n: number whose square root is being solved
 *
 * Return: -1 if n is less than 0, a call of another
 * function
 */

int _sqrt_recursion(int n)
{
	int sqr = 0;

	if (n < 0)
	{
		return (-1);
	}

	return (_sqr(n, sqr));
}
