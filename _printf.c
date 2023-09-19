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

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '\0')
			return (0);
		if (format[i] != '%')
		{
			_putchaarr(format[i]);
		}
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchaarr('%');
				i++;
			}
			if (format[i + 1] == 'c')
			{
				_putchaarr(va_arg(args, int));
				i += 2;
			}
			if (format[i + 1] == 's')
			{
				r = _puttss(va_arg(args, char *));
				i += 2;
				numfb = (numfb + (r - 1));
			}
			if (format[i + 1] == '%')
			{
				i += 1;
			}
			_putchaarr(format[i]);

		}
		numfb++;
		i++;
	}
	return (numfb);
	va_end(args);
}
