#include "main.h"

/**
 * *_strcpy - copies a string pointed by src, including
 * the terminating null byte to the buffer poined by
 * dest.
 * @dest: the first buffer pointer.
 * @src: origin of string'
 * Return: dest
 *
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
