#include <stdio.h>

/**
* main - prints program name
* @argc: the number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always success.
*/

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

return (0);
}
