#include "main.h"

/**
 * _memset - the function entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
