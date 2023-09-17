#include "main.h"

/**
 * _putchaarr - function that print char.
 * @c: pointer to string.
 * Return: number of byets.
 */

int _putchaarr(char c)
{
	return (write(1, &c, 1));
}
