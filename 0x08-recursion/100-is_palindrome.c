#include "main.h"

char * str_rev(char *s)
{
	char *rev;

	if (*s == '\0')
		return;
	rev = str_rev(s + 1);

	return (rev);
}


int is_palindrome(char *s)
{
	if (*s == *rev)
		return (
