#include <stdio.h>
/**
 * main-The main function
 * Return: Returns zero
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar('\n');

	return (0);
}
