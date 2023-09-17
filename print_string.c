#include<stdio.h>

/**
 * print_String - prints
 * Return: the length of the string
 */

void print_String(char *str)
{
	if (*str == '\0')
	{
	return;
	}
	printf("%c", *str);
	print_String(++str);
}
