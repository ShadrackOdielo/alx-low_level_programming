#include "main.h"

/**
 * _strncat - concatenates two strings using at most n strings
 * fron the second string
 * @n: max number of chars
 * @dest: destination string
 * @src: origin string.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, cnc;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (cnc = 0; cnc < n; cnc++)
	{
		dest[i + cnc] = src[cnc];
		if (src[cnc] == '\0')
			cnc = n;
	}

	return (dest);
}
