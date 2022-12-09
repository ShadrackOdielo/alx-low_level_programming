#include <stdio.h>

/**
 * main- The entry point of the program
 * Return: zero whe successful
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');

	return (0);
}
