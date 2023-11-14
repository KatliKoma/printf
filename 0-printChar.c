#include "main.h"
#include <stdio.h>
/**
 * printf_char - Prints characters based on provided arguments.
 * @args: The arguments to use.
 * @printed: The number of characters printed.
 * Return: The total count of printed characters.
 */

int printf_char(va_list args, int printed)
{
	int charCount = va_args(args, int);

	putchar(charCount);

	return (printed + 1);
}
