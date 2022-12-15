#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * Return: the value of the last digit.
 *@dg: the number
 */
int print_last_digit(int dg)
{
	int pld;

	pld = (dg % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}

