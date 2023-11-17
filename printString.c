#include "main.h"
#include <stdio.h>

/**
 * printf_string - Print a string.
 * @val: Argument.
 * Return: The length of the string.
 */
int printf_string(va_list val)
{
	char *s = va_arg(val, char *);
	int len = (s == NULL) ? _strlen("(null)") : _strlen(s);

	for (int i = 0; i < len; i++)
		_putchar((s == NULL) ? "(null)"[i] : s[i]);

	return (len);
}
