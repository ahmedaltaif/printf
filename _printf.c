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

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchaarr(format[i]);
		else if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchaarr(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				r = _puttss(va_arg(args, char *));
				i++;
				numfb = (numfb + (r - 1));
			}
			if (!format[i + 1])
				return (-1);
			if (format[i + 1] == '%')
				i += 2;
			else
				i++;
		}
		numfb++;
	}
	return (numfb);
	va_end(args);
}
