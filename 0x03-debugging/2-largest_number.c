#include "main.h"

/**
 * largest_number - returns the largest of three numbers.
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: the largest integer
 */
int largest_number(int a, int b, int c)
{
	int big;

	if ((a >= b) && (a >= c))
		big = a;
	else if ((b >= a) && (b >= c))
		big = b;
	else
		big = c;
	return (big);
