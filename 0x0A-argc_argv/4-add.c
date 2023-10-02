#include "main.h"
#include <ctype.h>


int main(int argc, char *argv[])
{
	int add, i;

	add = 0;
	i = 1;

	if (argc < 2)
	{
		putchar('0');
	}

	while (i < argc)
	{
		if (isdigit(argv[i]))
		{
			add += atoi(argv[i]);
			i++;
		}

		printf("Error\n");
		return (1);
	}

	printf("%d\n", add);
	return (0);
}
