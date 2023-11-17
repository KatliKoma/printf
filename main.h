#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int printf_string(va_list val);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int _printf(const char *format, ...);
int _putchar(char c);
int printf_string(va_list args, int charPrinted);
int processSpecifier(const char *format, va_list args, int charPrinted);
int printChar(va_list args, int charPrinted);
int printInteger(va_list args, int charPrinted);

#endif
