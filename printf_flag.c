#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * print_char - Prints a character.
 * @types: List of arguments.
 * @buffer: Buffer array to handle print.
 * @flags: Calculates active flags.
 * @width: Width specifier.
 * @precision: Precision specification.
 * @size: Size specifier.
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%' && (*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			int num = va_arg(args, int);

			printf("%d", num);
			count++;
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
}
	va_end(args);
	return (count);
}

int main(void)
{
	_printf("This is a number: %d. And another one: %i.\n", 42, -123);
	return (0);
}
