#include <stdio.h>

/**
 * _isalpha - checks the alphabet character
 * @c: character entered by the user
 * Return: 1 if c is an alphabet otherwise return 0.
 */
int _isalpha(int c)
{
	if ((c>= 97 && c <= 122) || (c >=65 && c <= 90))
		return (1);
	else
		return (0);
}
