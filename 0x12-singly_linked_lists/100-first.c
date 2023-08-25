#include "main"

/**
 * execute_before_main - allows this function to be interpreted before main
 */

void __attribute__ ((constructor)) execute_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
