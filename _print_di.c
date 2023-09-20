#include "main.h"
/**
 * _printf_d - handle "d"
 * @d: integer
 * Return: num of d
 */
int _printf_d(va_list d)
{
	long int num;
	long int dic;
	long int count = 0;

	dic = va_arg(d, int);
	if (d != 0)
	{
		if (dic < 0)
		{
			_putchaarr('-');
			dic = -dic;
			count++;
		}
		dic = reverse_integer(dic);
		while (dic > 0)
		{
			num = dic % 10;
			dic /= 10;
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
