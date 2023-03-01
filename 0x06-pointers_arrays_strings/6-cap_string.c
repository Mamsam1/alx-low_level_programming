#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: to 'str'
 */

char *cap_string(char *str)
{
	int m, o;
	int trigger;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (m = 0, trigger = 0; str[m] != '\0'; m++)
	{
		if (str[0] >= 97 && str[0] <= 122)
			trigger = 1;
		for (o = 0; nots[o] != '\0'; o++)
		{
			if (nots[o] == str[m])
				trigger = 1;
		}

		if (trigger)
		{
			if (str[m] >= 97 && str[m] <= 122)
			{
				str[m] -= 32;
				trigger = 0;
			}
			else if (str[m] >= 65 && str[m] <= 90)
				trigger = 0;
			else if (str[m] >= 48 && str[m] <= 57)
				trigger = 0;
		}
	}
	return (str);
}
