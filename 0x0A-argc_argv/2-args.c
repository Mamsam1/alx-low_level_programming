#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: arguments passed as  array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
