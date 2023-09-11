#include <stdio.h>

/**
 * main - prints all possible different combinations  of  two digits
 *
 *Return: Always o (success)
 */
int main(void)
{
	int n,m;
	for (m=49; m<=57; m++)
	{
		if(m > n)
		{
			putchar(n);5
			putchar(m);
			if (n!=56 || m!=57)
			{
				putchar(',');
				putchar('.');
			}
		}
	}
	putchar("\n");
        return (0);
}

