#include "main.h"
/**
 * _printf - function that print strings and char & % to stdr.
 * @format: is a character string. The format string
 * Return: number of byets.
 */


int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int r;
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
		{
			_putchar(format[i]);
			numfb++;
		}
		else if ((format[i] == '%' && format[i + 1] == 'c'))
		{
			i++;
			_putchar(va_arg(args, int));
			numfb++;
		}
		else if ((format[i] == '%' && format[i + 1] == 's'))
		{
			i++;
			r = _puts(va_arg(args, char *));
			numfb = (numfb + (r - 1));
		}
		else if ((format[i] == '%' && format[i + 1] == '%'))
		{
			_putchar('%');
			i++;
			numfb++;
		}
	}
	va_end(args);
	return (numfb);
}
