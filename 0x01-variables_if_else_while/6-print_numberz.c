#include <stdio.h>

/**
 * main- The main function
 * Return: Returns zero
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
		putchar(ch + '0');
	putchar('\n');

	return (0);
}
