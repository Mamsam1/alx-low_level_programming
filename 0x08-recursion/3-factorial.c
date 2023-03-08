#include "main.h"

/**
 * factorial - factorial of a given number.
 * @n: integer type number
 * Return: factorial or error for -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
