#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the alphabet without q and e
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
