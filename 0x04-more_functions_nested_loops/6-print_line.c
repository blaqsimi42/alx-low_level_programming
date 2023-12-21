#include "main.h"

/**
 * print_line -  create a line with _
 * @n: length of the line
 * Return: none.
 */
void print_line(int n)
{
	if (n > 0)
	{
	int i;

	for (i = 1; i <= n; ++i)
		_putchar('_');
	}
	_putchar('\n');
}
