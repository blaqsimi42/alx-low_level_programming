#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - code creates randomized valid passwords for
 * 101-crackme printed to the standard output
 *
 * Return: 0 on always (success)
 */
int main(void)
{
	int sum = 0;
	char randchar;

	srand(time(0));

	while (sum <= 2646)
	{
		randchar = rand() % 128;
		write(1, &randchar, 1);
		sum += randchar;
	}

	randchar = 2772 - sum;
	write(1, &randchar, 1);
	return (0);
}
