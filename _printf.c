#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that print strings and char & % to stdr.
 * @format: is a character string. The format string
 * Return: number of byets.
 */


int _printf(const char *format, ...)
{
	int i = 0;
	int r = 0;
	int numfb;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == '%')
			{
				_putchar('%');
			}
			else
			{
				if (format[i + 1] == 's')
				{
					r = _puts(va_arg(args, char *));
					i++;
					numfb = numfb + r;
				}
			}
		}
		numfb++;
		i++;
	}
	va_end(args);
	return (numfb);
}
