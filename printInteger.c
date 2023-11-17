#include "main.h"
#include <stdio.h>

/**
 * printInteger - Outputs an integer to the standard output.
 * @args: Variable arguments list.
 * @charPrinted: The count of characters printed so far.
 * Return: The updated count of characters printed.
 */
int printInteger(va_list args, int charPrinted)
{
	int num = va_arg(args, int);
	char buffer[12];
	int length = snprintf(buffer, sizeof(buffer), "%d", num);
	int i;
	if (length > 0)
	{
		for (i = 0; i < length; i++)
		{
			_putchar(buffer[i]);
			charPrinted++;
		}
	}
	return (charPrinted);
}
