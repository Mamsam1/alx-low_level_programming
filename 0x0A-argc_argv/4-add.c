#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument in strings
 * Description: If no number print result to 0.
 * If one of the numbers has no digits, print Error.
 * Return: 0 on success or 1 on error
 */

int main(int argc, char *argv[])
{
	int total, m;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (m = 1; argv[m]; m++)
		{
			num = strtol(argv[m], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
