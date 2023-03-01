#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 * @c: string
 * Return: c
 */

char *string_toupper(char *c)
{
	int m;

	for (m = 0; c[m] != '\0'; m++)
	{
		if (c[m] >= 97 && c[m] < 123)
		{
			c[m] -= 32;
		}
	}
	return (c);
}
