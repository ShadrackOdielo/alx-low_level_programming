#include "main.h"

/**
 * more_numbers - print numbers from 1 to 14
 */

void more_numbers(void)
{
	int num, i;

	i = 0;
	while (i < 10)
	{
	for (num = 0; num <= 14; num++)
	{
		if (num >= 10)
			_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
	i++
	}
}
