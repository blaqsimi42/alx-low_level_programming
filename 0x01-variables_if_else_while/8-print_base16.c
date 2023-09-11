#include <stdio.h>

/**
 * main - prints number from 0 to 9
 *
 *Return: Always o (success)
 */
int main(void)
{
	int i;

	for (i= 48, i < 58; i++)
        {
		putchar(i);
	}
	for (i= 97, i < 103; i++)
        {
		putchar(i);
	}
	putchar('\n');
	return (0);
}

