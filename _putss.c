#include "main.h"
/**
 * _puttss - function that print strings.
 * @c: pointer to string.
 * Return: number of byets.
 */

int _puttss(char *c)
{
	int d = 0;

	if (c == NULL)
		c = "(null)";
	for (d = 0; c[d] != '\0'; d++)
	{
		_putchaarr(c[d]);
	}
	return (d);
}
