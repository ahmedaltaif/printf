#include <stdarg.h>
#include "main.h"


int _printf(const char *format, ...)
{
    int i = 0;
    
    va_list args;
    va_start(args, format);

    while(format[i] != '\0')
    {
        if(format[i] != '%')
        {
            _putchar(format[i]);
        }
        else if(format[i] == '%')
        {
            if(format[i + 1] == 'c')
            {
                _putchar(va_arg(args, int));
                i++;
            }
            else if(format[i + 1] == '%')
            {
                _putchar('%');
            }
            else
            {
                if (format[i + 1] == 's')
                {
                   _puts(va_arg(args, char *));
                    i++;
                }
            }
        }
        
        
        i++;
        
    }
    va_end(args);
    return(i);
    
}
