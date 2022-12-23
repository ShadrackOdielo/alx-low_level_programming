#include "main.h"

/**
 * leet - encodes string into 1337.
 * @n: string input.
 * Return: encoded string.
 */

char *leet(char *n)
{
	int i, x;
	int set1[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int set2[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (n[i] == set1[x])
			{
				n[i] = set2[x / 2];
				x = 9;
			}
		}
	}

	return (n);
}
