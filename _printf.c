#include <stdarg.h>
#include "main.h"
/**
 * _printf - function that print strings and char & % to stdr.
 * @format: is a character string. The format string
 * Return: number of byets.
 */


int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int r = 0;
	unsigned int numfb = 0;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if ((format[i] == '%' && format[i + 1] == 'c'))
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if ((format[i] == '%' && format[i + 1] == 's'))
		{
			r = _puts(va_arg(args, char *));
			i++;
			numfb = (numfb + (r - 1));
		}
		else if ((format[i] == '%' && format[i + 1] == '%'))
		{
			_putchar('%');
		}
		numfb++;

	}
	va_end(args);
	return (numfb);
}
