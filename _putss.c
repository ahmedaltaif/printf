#include "main.h"

int _puts(char *c)
{
    int d;
    for (d = 0; c[d] != '\0'; d++)
    {
        _putchar(c[d]);
    }
    return(d);
}