#include "main.h"
/**
 * _printf_i - handle "i"
 * @i: integer
 * Return: num of i
 */
int _printf_i(va_list i)
{
	int count = 0;
	int in = va_arg(i, int);

	if (in < 0)
	{
		_putchaarr('-');
		in = -in;
		count++;
	}

	if (in == 0)
	{
		_putchaarr('0');
		return (count + 1);
	}

	while (in > 0)
	{
		int digit = in % 10;

		in /= 10;
		_putchaarr(digit + '0');
		count++;
	}
	return (count);
}
