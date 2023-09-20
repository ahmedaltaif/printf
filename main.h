#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchaarr(char c);
int _puttss(char *c);
int _printf_i(va_list args);
int _printf_d(va_list args);
int reverse_integer(int integer);
#endif /* MAIN_H */
