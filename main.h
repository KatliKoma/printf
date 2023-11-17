#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_string(va_list args, int charPrinted);
int processSpecifier(const char *format, va_list args, int charPrinted);
int printChar(va_list args, int charPrinted);
int printInteger(va_list args, int charPrinted);

#endif
