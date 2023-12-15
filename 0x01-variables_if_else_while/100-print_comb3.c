#include <stdio.h>

/**
 * main - prints all possible different combinations  of  two digits
 *
 *Return: Always o (success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int x = i;

		while (x <= 9)
		{
			if (x != i)
			{
				putchar (i % 10 + '0');
				putchar (x % 10 + '0');
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			x++;

		}
		i++;

	}
	putchar ('\n');
	return (0);
}
