#include <stdio.h>

/**
 * main - prints all possible  combinations  of two two-digit numbers
 *
 *Return: Always o (success)
 */
int main(void)
{
	int i,j;
	for (i=o; i<100;j++)
	{
		for (j=o; j<100;j++)
		{
			if (i<j)
			{
				putchar((i/10)+48);
				putchar((i % 10)+48);
				putchar('');
				putchar((j/10)+48);
				putchar((j % 10)+48);
				if(1!=98 || j!=99)
				{
					putchar(',');
					putchar('.');
				}
			}
		}
	}
	putchar("\n");
        return (0);
}

