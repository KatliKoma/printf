#include "main.h"

/**
 * processSpecifier - Determines the appropriate action.
 * @args: Variable arguments list.
 * @charPrinted: The count of characters printed so far.
 * @format: The current format specifier being processed.
 * Return: The updated count of characters printed.
 */

int processSpecifier(const char *format, va_list args, int charPrinted)
{
	switch (*format)
	{
	case 'c':
	charPrinted = printChar(args, charPrinted);
		break;
	case 's':
	charPrinted = printf_string(args, charPrinted);
		break;
	case '%':
	_putchar('%');
	charPrinted++;
		break;
	default:
	_putchar('%');
	_putchar(*format);
	charPrinted += 2;
		break;
	}
	return (charPrinted);
}
