#include "variadic_functions.h"

/**
 * print_all - prints all special arguments corresponding to 
 * specific char
 * @format: string to be checked
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list vap;

	va_start(vap, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				putchar((char) va_arg(vap, int));
				break;
			case 's':
				str = va_arg(vap, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s, ", str);
				break;
			case 'i':
				printf("%d, ",va_arg(vap, int));
				break;
			case 'f':
				printf("%f, ", (float)va_arg(vap, double));
				break;
		}
		i++;
	}
	putchar('\n');
	va_end(vap);
}
