#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */

int printf_int(va_list args)
{
	int j = va_arg(args, int);
	int num, last = j % 10, digit, exp = 1;
	int  k = 1;

	j = j / 10;
	num = j;

	if (last < 0)
	{
		putchar('-');
		num = -num;
		j = -j;
		last = -last;
		k++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = j;
		while (exp > 0)
		{
			digit = num / exp;
			putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			k++;
		}
	}
	putchar(last + '0');

	return (k);
}
