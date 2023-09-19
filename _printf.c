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
	int numfb = 0;
	va_list args;

	va_start(args, format);

	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchaarr(format[i]);
			numfb++;
			i++;
		}
		if (format[i] == '\0')
			return (-1);
		if (format[i] == '%' && format[i + i] == 'c')
		{
			i += 2;
			_putchaarr(va_arg(args, int));
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			r = _puttss(va_arg(args, char *));
			i += 2;
			numfb = (numfb + (r - 1));
		}
		if (!format[i + 1])
			return (0);
		_putchaarr(format[i]);
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;

	numfb++;
	}
	return (numfb);
	va_end(args);
}
