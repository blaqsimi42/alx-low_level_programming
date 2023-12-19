#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * print_last_digit - extracts the last digit of a number inserted
 * @n: a number to be entered
 * Return: last digit of the number.
 */
int print_last_digit(int n)
{
	if (n == INT_MIN)
		n = 8;
	if (n < 0)
		n = (-1 * n);

	_putchar (n % 10 + 48);

	return (n % 10);
}
