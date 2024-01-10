/**
 * _pow_recursion - number return to a positive integer power
 *
 * @x: the number
 * @y: the power
 *
 * Return: -1 if y < 0, result of x^y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
