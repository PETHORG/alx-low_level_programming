#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints name using function pointers
 * @name: name to be output
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
