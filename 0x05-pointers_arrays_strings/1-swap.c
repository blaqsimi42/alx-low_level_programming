/**
 * swap_int - it swaps two integer's values
 *
 * @a: an integer to be swapped with b
 * @b: integer to be swapped with a
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
