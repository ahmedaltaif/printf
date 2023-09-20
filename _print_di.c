#include "main.h"
/**
* _printf_d - handle "d"
* @d: integer
* Return: num of d
*/
int _printf_d(va_list d)
{
	int num2, num1, counter = 0, k, dic, tall, mid;

	dic = va_arg(d, int);
	if (dic == 0)
	{
		_putchaarr('0');
		return (1);
	}
	if (dic != 0)
	{
		if (dic < 0)
		{
			counter++;
			_putchaarr('-');
		}
		tall = 0;
		num2 = dic;
		while (num2 != 0)
		{
			tall++;
			num2 /= 10;
		}
		mid = 1;
		for (k = 1; k <= tall - 1; k++)
			mid *= 10;
		for (k = 1; k <= tall; k++)
		{
			num1 = dic / mid;
			if (dic < 0)
				_putchaarr((num1 * -1) + 48);
			else
				_putchaarr(num1 + '0');
			dic -= num1 * mid;
			mid /= 10;
			counter++;
		}
	}
	return (counter);
}
