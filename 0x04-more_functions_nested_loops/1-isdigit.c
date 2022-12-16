#include "main.h"

/**
 * _isdigit - a function to test whether an input is a digit.
 * @c: The character input.
 * Return: ! if it is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
