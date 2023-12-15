#include <stdio.h>

/**
 * main - prints number from 0 to 9
 *
 *Return: Always o (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar (i % 10 + '0');
		i++;

	}
	putchar ('\n');
	return (0);
}
