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


	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');

	return (dest);
}
