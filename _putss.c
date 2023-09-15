#include "main.h"

int _puts(char *c)
{
    int i;
    for (i = 0; c[i] != '\0'; i++)
    {
        _putchar(c[i]);
    }
    return(i);
}