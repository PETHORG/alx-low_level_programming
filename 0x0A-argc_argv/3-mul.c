#include "main.h"

/**
 * main - Entry point
 * @argc: length of array argument
 * @argv: array of argument to the main
 *
 * Return: 0 -Success, 1-Error
 */

int main(int argc, char *argv[])
{
	int mul, i;

	mul = 1;
	i = 1;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	while (i < argc)
	{
		mul *= atoi(argv[i]);
		i++;
	}

	printf("%d\n", mul);
	return (0);
}
