#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: the first integer
 * @b: the second integer.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


