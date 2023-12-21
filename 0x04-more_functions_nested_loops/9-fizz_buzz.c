#include <stdio.h>

/**
* main - prints fizz,buzz and fizzbuzz
*
* Return: Always success.
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i > 1)
			putchar(' ');

		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%d", i);
	}
putchar('\n');
return (0);
}
