#include "main.h"
#include <stdio.h>


/**
 * print_array - a function that prints n elements of an array
 * of integers.
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int j;

	if (n == 0)
	{
		return;
	}
	for (j = 0; j < n - 1; j++)
	{
		printf("%d, ", a[j]);
	}
	printf("%d", a[n - 1]);
	_putchar('\n');
}
