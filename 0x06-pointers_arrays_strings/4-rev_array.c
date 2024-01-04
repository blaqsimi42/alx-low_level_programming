#include "main.h"

/**
 * reverse_array - it reverses an array of integers
 *
 * @a: array of integer
 * @n: the number of array elements to reverse
 *
 * return: void
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *ptr = a;

	while (&a[n--] > ptr)
	{
		tmp = *ptr;
		*ptr = a[n];
		a[n] = tmp;
		ptr++;
	}
}
