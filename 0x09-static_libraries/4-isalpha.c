#include "stdio.h"

/**
 * _isalpha - checks the alphabet character
 * @c: character input by user
 * Return: 1 if c is alphabet otherwise 0.
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}

