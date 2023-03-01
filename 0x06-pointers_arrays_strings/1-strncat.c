#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string to contatenate
 * @src: string to be contatenated
 * @n: number of elements for contatenate
 * Return: pointer resulting to string 'dest'
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
