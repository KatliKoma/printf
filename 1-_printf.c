#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: String to print along with any format specifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == 'd' || *format == 'i') 
			{
			int num = va_arg(args, int);
			printf("%d", num);
			count++;
			}
			else
			{
				putchar('%');
				putchar(*format);
				count += 2;
			}
        	}
	format++;
	}

	va_end(args);
	return count;
}
