#include "main.h"

/**
 * _putchar - function that print char.
 * @c: pointer to string.
 * Return: number of byets.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
