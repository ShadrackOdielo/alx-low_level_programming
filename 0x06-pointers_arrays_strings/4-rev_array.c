#include "main.h"

/**
 * reverse_array - reverse the contents of an array.
 * @a: the array of chars.
 * @n: number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
