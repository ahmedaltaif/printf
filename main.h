#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _putchaarr(char c);
int _puttss(char *c);
int _print_i(va_list i);
int _printf_d(va_list args);
#endif /* MAIN_H */
