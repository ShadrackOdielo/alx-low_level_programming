#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string input's pointer
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int i = 0, sum = 0;

	while (s[i] != '\n')
	{
		sum++;
		i++;
	}
	return (sum);
}
