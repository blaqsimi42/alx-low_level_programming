	(task 7)
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *followed by a new line
 *Return: Always o (success)
 */
int main(void)
{
	char ch;
	for (ch='z'; ch>='a'; ch--)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}

