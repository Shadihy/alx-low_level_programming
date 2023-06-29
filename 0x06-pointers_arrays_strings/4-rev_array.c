#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int s;
	int p;

	for (s = 0; s < (n / 2); s++)
	{
		p = a[s];
		a[s] = a[n - s - 1];
		a[n - s - 1] = p;
	}
}
