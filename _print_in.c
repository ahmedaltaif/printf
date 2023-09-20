#include "main.h"
/**
 * _printf_i - handle "i"
 * @i: integer
 * Return: num of i
 */
int _printf_i(va_list i)
{
	int num;
	int in;
	int count = 0;

	in = va_arg(i, int);
	if (in != 0)
	{
		if (in < 0)
		{
			_putchaarr('-');
			in = -in;
			count++;
		}
		in = reverse_integer(in);
		while (in > 0)
		{
			num = in % 10;
			in /= 10;
			_putchaarr(num + '0');
			count++;
		}
	}
	else
	{
		_putchaarr(0 + '0');
	}
	return (count);
}
