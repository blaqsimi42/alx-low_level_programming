#include <stdio.h>

/**
* main - prints the number of command line arguements passed
* @argc: the number of command line arguments
* @argv: An array that contains the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

return (0);
}
