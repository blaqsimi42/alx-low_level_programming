#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description - fizz for multiples of 3, buzz for multiples of 5
 * print - fizzbuzz for both multiples of 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("fizzbuzz");
		else if (i % 3 == 0)
			printf("fizz");
		else if (i % 5 == 0)
			printf("buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
