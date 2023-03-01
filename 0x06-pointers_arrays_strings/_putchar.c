#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: printed character
 *
 * Return: On success 1.
 * On error, Return to -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
