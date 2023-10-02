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
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	exit (EXIT_SUCCESS);
}
