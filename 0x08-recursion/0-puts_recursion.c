#include "main.h"

/**
 * _puts_recursion - puts,does this recursively
 *
 * @s: string to the puts
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
