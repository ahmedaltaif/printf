#include "main.h"
/**
 * reverse_integer - reverse an integer
 * @integer: the integer to reverse
 * Return: the reversed integer
 */
int reverse_integer(int integer)
{
	int reversed_integer = 0;

	while (integer > 0)
	{
	int digit = integer % 10;

	reversed_integer = (reversed_integer * 10) + digit;
	integer = integer / 10;
	}
	return (reversed_integer);
}
