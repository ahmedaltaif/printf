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

	if (format == NULL)
		return (-1);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				i++;
			}
			else if (format[i + 1] == 's')
			{
				r = _puts(va_arg(args, char*));
				i++;
				numfb = (numfb + (r - 1));
			}
		}
		numfb++;
		i++;
	}
	va_end(args);
	return (numfb);
}
