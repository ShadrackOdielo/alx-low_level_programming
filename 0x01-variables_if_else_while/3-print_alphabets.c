#include <stdio.h>

/**
 * main-The starting point of any c program
 * Return:It returns zero
*/

int main(void)
{
	char ch1, ch2;

	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
		putchar(ch1);
	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
		putchar(ch2);
	putchar('\n');

	return (0);
}
