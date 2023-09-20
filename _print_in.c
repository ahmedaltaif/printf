#include "main.h"
/**
 * _printf_i - handle "d"
 * @d: integer
 * Return: num of d
 */
int _print_i(va_list i)
{
    int num;
    int in;
    int count = 0;
    in = va_arg(i, int);
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
    return(count);
}
