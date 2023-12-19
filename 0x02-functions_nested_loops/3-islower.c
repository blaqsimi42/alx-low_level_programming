#include "stdio.h"

/**
 * _islower - check lowercase alphabets
 * @c: letter inputed by the  user
 * Return: 1 if n is lowercase else 0.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
