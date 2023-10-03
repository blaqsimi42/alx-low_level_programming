#include "main.h"

/**
 * main - prints the number of arguments passed to a program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, int *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
