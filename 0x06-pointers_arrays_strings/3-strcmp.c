#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: 0 for match, +ve if s1 > s2, -ve if s1 < s2.
 */

int _strcmp(char *s1, char *s2)
{
	int m;

	for (m = 0; s1[m] != '\0' || s2[m] != '\0'; m++)
	{
		if (s1[m] != s2[m])
			return (s1[m] - s2[m]);
	}
	return (0);
}
