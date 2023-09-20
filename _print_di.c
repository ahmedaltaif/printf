#include "main.h"
/**
 * _printf_d - handle "d"
 * @d: integer
 * Return: num of d
 */
int _printf_d(va_list d)
{
    int num;
    int dic;
    int count = 0;
    dic = va_arg(d, int);
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
    return(count);
}
