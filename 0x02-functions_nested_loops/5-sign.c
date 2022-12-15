#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: it accept an integer input
 *
 * Return: 1 for poitive 0 fot zero and -1 for negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
