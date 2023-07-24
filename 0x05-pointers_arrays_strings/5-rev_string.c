#include "main.h"
/**
 * rev_string - reverses string
 * @s: pointer to a char
 */

void rev_string(char *s)
{
	int tmp, beg = 0;
	int end = n - 1; /* omit null terminator in length */

	while (beg < end)
	{
		tmp = *(a + beg);
		*(a + beg) = *(a + end);
		*(a + end) = tmp;
		beg++, end--;
	}
}
