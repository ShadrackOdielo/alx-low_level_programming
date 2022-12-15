#include "main.h"

/**
 * _islower - the fuction checks whether letter is lowercase.
 *
 * @c: accepts a character input.
 *
 * Return: 1 if true 0 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
