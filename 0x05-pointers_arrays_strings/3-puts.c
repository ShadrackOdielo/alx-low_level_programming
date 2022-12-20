#include "main.h"

/**
 * _puts - prints a string followed by newline to stdout.
 * @str: the string input.
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
