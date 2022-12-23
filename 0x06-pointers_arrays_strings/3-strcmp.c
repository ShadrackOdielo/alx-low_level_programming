i#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: 1 if the strings are equal 0 otherwise.
 */

int _strcmp(char *s1, char *s2)
{
	int p;

	for (p = 0; s1[i] != '\0' && s2[i] != '\0'; p++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
