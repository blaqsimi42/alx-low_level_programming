#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* isNumber - checks if string is an integer
* @str: the string parameter
*
* Return: 1 if number otherwise 0.
*/

int isNumber(char *str)
{
	int j = strlen(str);

	while (j--)
	{
		if (str[j] > 47 && str[j] < 58)
			continue;
		return (0);
	}
return (1);
}

/**
* main - makes addition of positive integers recieved by the command line
* @argc: the number of command line arguments
* @argv: An array that contains program command line arguments
*
* Return: 0 if success otherwise 1.
*/

int main(int argc, char *argv[])
{
	int i, sum = 0, count = 0;

	if (argc - 1 > 0)
	{
		for (i = 1; i < argc; ++i)
		{
			if (!isNumber(argv[i]))
				++count;
			else
				sum += atoi(argv[i]);
		}
	}

	if (argc - 1 == 0 || count == argc - 1)
		printf("0\n");

	else if (count > 0)
	{
		printf("Error\n");
		return (1);
	}

	else
		printf("%d\n", sum);

return (0);
}
