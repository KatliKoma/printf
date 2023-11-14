#include "main.h"

/**
 * printChar- Outputs a single character to the standard output
 * @args: Variable arguments list
 * @charPrinted: The current count of characters printed
 * Return: The updated count of characters printed after processing
 */

int printChar(va_list args, int charPrinted)
{
	int charPrint = va_arg(args, int);

	_putchar(charPrint);
	charPrinted++;

	return (charPrinted);
}
