#include <stdio.h>
#include "main.h"
/**
 * _printf -
 * @format:
 * Return:
 */
int _printf(const char *format, ...)
{
        int charPrinted = 0;

        va_list args;

        va_start(args, format);

        while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;
                        charPrinted = selector(format, args, charPrinted);
                        format++;
                }
                else
                {
                        _putchar(*format);
                        charPrinted++;
                        format++;
                }
        }
        va_end(args);
        return (charPrinted);
}
