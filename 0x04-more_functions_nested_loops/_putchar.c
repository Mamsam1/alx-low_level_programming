#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The character to print
 * Return : Success 1.
 * on error, to -1 and error is set appropriately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
