#include <unistd.h>
/**
 * _putchar - function that print char
 * @c: the input char
 * Return: characters to stdr.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
