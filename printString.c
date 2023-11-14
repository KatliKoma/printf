#include "main.h"
#include <stdio.h>

/**
 * printf_string - prints a string
 * @args: the arguments to use
 * @charPrinted: the printed characters
 * Return: printed characters
 */

int printf_string(va_list args, int charPrinted)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(NULL)";
	}

	while (*str != '\0')
	{
		_putchar(*str);
		charPrinted++;
		str++;
	}

	return (charPrinted);
}
