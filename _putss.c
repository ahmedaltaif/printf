#include "main.h"
/**
 * _puts - function that print strings.
 * @c: pointer to string.
 * Return: number of byets.
 */

int _puts(char *c)
{
	int d = 0;

	if (c)
	{
		for (d = 0; c[d] != '\0'; d++)
		{
			_putchar(c[d]);
		}
	}
	return (d);
}
