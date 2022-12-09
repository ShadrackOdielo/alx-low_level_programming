#include <stdio.h>
/**
 * main- the main function
 * Return: The function returns 0
 */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
		if (ch < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
