#include "main.h"

/**
 * _isalpha - checks whether a number is in the alphabet.
 *
 * @c: It accepts an integer input
 *
 * Return: 1 if it is a letter and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
