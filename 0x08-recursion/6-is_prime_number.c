#include "main.h"

/**
 * verify - verify the number if is prime
 * @i: input
 * @j: input
 * Return: return 1 if is prime, 0 if not
 */
int verify(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	if (i > j / 2)
		return (1);
	else
		return (verify(i + 1, j));
}
/**
 * is_prime_number - check if an integer is a prime number or not
 * @n: input
 * Return: return to 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (verify(2, n));
}
