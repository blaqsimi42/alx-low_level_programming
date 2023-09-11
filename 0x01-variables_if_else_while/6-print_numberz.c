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
		printf("%d , i);
	}
	putchar('\n');
	return (0);
}

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
