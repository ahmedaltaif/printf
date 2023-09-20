#include "main.h"
/**
* _print_i - handle "i"
* @i: integer
* Return: num of i
*/
int _print_i(va_list i)
{
	int num2, num1, counter = 0, k, in, tall, mid;

	in = va_arg(i, int);
	if (in == 0)
	{
		_putchaarr('0');
		return (1);
	}
	if (in != 0)
	{
		if (in < 0)
		{
			_putchaarr('-');
			counter++;
		}
		num2 = in;
		tall = 0;
		while (num2 != 0)
		{
			num2 /= 10;
			tall++;
		} mid = 1;
		for (k = 1; k <= tall - 1; k++)
		{
			mid *= 10;
		} for (k = 1; k <= tall; k++)
		{
			num1 = in / mid;
			if (in < 0)
			{
				_putchaarr((num1 * -1) + 48);
			} else
			{
				_putchaarr(num1 + '0');
			} counter++;
			in -= num1 * mid;
			mid /= 10;
		}
	} return (counter);
}
