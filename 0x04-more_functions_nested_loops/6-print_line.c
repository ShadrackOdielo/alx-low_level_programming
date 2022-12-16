#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the number of times _ should be printed
 */

void print_line(int n)
{
	int j;

	for (j = 0; j > n; j++)
		_putchar('_');
	_putchar('\n');
}
