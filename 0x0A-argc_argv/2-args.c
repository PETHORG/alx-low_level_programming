#include "main.h"


int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	exit (EXIT_SUCCESS);
}
