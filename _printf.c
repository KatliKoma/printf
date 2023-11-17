#include "main.h"
#include <stdarg.h>
/**
 * _printf- Custom implementation of the printf function.
 * @format: A format string containing directives for printing.
 * Return: number of characters printed.
 * _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
 */
int _printf(const char *format, ...)
{
	int charPrinted = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != '\0')
		{
			format++;
			charPrinted = processSpecifier(format, args, charPrinted);
			format++;
		}
		else
		{
			_putchar(*format);
			charPrinted++;
			format++;
		}
		if (*format == '\0')
			break;
	}
	va_end(args);
	return (charPrinted);
}
