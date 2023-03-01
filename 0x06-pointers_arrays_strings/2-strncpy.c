#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: identified string
 * @src: identified string
 * @n: number of chars to copy over
 * Return: To 'dest'
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; n > a; a++)
		dest[a] = '\0';
	return (dest);
}
