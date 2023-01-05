#include "main.h"

/**
 * factorial - entry pint of the function
 * @n: input
 * Return: the factorial or a status code.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
