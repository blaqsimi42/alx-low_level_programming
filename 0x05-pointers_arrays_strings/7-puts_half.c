#include "main.h"

/**
 * _strlen - gets the length of string
 *
 * @s: the string to get the length of
 *
 * Return: to length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * puts_half - prints out second half of the string
 * if odd len, begin (len - 1) / 2
 *
 * @str: the string to print half of
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = (_strlen(str) + 1) / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
