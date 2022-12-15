#include "main.h"

/**
 * _abs - finds the absolute value of a number.
 *
 * @r: accepts int input.
 *
 * Return: returns the number as an absolute value.
 */

int _abs(int r)
{
	if (r < 0)
		return (r * -1);
	else
		return (r * 1);
}

