#include <stdio.h>
/**
 * prime_finder - checks if number is prime recursively
 *
 * @x: the number to determine if it is prime
 * @y: the number to check if it is the divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int prime_finder(int x, int y)
{
	if (x == y)
		return (1);
	if (!(x % y))
		return (0);
	return (prime_finder(x, y + 1));
}
/**
 * is_prime_number - return if a prime number
 *
 * @n: the number to determine if it is prime
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_finder(n, 2));
}
