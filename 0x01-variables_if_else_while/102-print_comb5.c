#include <stdio.h>

/**
 * main- The entry point
 * Return: zero
 */
int main(void)
{
	int n, p;

	for (p = 0; p <= 9; p++)
	{
		for (n = 0; n <= 9; n++)
		{
			putchar(n + '0');
			putchar(p + '0');
		}
	}
	putchar('\n');

	return (0);
}
