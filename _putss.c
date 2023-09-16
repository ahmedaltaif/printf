#include "main.h"
/**
 * _puts - function that print strings.
 * @c: pointer to string.
 * Return: number of byets.
 */

int _puts(char *c)
{
	unsigned int i = 0;

	while (*c)
	{
		_putchar(*c++);
		i++;
	}

	return (i);
}
