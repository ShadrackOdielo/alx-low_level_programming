#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times _ should be printed
 */

void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
