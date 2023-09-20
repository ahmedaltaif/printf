#include "main.h"
/**
 * _printf - function that print strings and char & % to stdr.
 * @format: is a character string. The format string
 * Return: number of byets.
 */
int _printf(const char *format, ...)
{
	unsigned int i, r, d, numfb = 0;
	va_list args;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchaarr(format[i]);
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchaarr('%');
				i++;
			} else if (format[i + 1] == 'c')
			{
				_putchaarr(va_arg(args, int));
				i++;
			} else if (format[i + 1] == 's')
			{
				r = _puttss(va_arg(args, char *));
				i++;
				numfb = (numfb + (r - 1));
			} else if (format[i + 1] == 'd')
			{
				d = _printf_d(args);
				numfb = numfb + d;
				i++;
			} else if (format[i + 1] == 'i')
			{
				d = _printf_i(args);
				numfb = numfb + d;
				i++;
			} else
				_putchaarr('%');
		} numfb++;
	} return (numfb);
	va_end(args);
}

