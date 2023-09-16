#include "main.h"

/**
 * print_buffer - prints the contents of the buffer if exist
 * @buffer: Array of chars
 * @buff_ind: index at which to add nex char,represents the length
 */

void print_buffer(char[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}

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
	while (format[i] != '\0')
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
		i++;
	}
	va_end(args);
	return (numfb);
}
