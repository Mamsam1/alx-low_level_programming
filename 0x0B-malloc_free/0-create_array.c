#include "main.h"

/**
 * *create_array - program startup
 * @size: int being evaluated
 * @c: char being evaluated
(*
 * Description: creates an array of chars
 * and initializes it with a specific char)?
 * Return: return NULL
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int rand;

	array = malloc(sizeof(char) * size);

	if (array == NULL || size == 0)
	{
		return (NULL);
	}
	for (rand = 0; rand < size; rand++)
	{
		array[rand] = c;
	}
	return (array);
}
