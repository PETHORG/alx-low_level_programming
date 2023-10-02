#include "main.h"

/**
 * main - Entry point, with arguments to the main
 * @argc: the length of arguments to the main
 * @argv: a pointer to arguments to the main
 *
 * Return: Always SUCCESS
 */

int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	exit (EXIT_SUCCESS);
}
