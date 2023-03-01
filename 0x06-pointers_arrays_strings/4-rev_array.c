#include "main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int m;
	int o;

	for (m = 0; m < (n / 2); m++)
	{
		o = a[m];
		a[m] = a[n - m - 1];
		a[n - m - 1] = o;
	}
}
