#include "main.h"

/**
 * _strcat - concatenate two strings.
 * @dest: destination
 * @src: source
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; (dest[i + j] = *src++) != '\0'; j++)
		;

	return (dest);
}
