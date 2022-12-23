#include "main.h"

/**
 * cap_string - capitalizes all the words in
 * a string.
 * @n: string input.
 * Return: n
 */
char *cap_string(char *n)
{
	int i, j;
	int cap = 32;
	char sep[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if ((n[i] >= 'a') && (n[i] <= 'z'))
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (j = 0; j <= 12; j++)
		{
			if (n[i] == sep[j])
			{
				j = 12;
				cap = 32;
			}
		}

	}
return (n);
}
