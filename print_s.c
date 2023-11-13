#include "main.h"
#include <string.h>
/**
 * print_s - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int print_s(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			putchar(s[i]);
		return (len);
	}
}
