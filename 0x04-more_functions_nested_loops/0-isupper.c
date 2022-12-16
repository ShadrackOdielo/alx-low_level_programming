#include "main.h"

/**
 * _isupper - the main function
 * @c: The character input
 * Return: 1 if uppercase and 0 if not.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
