#include "main.h"

/**
 * verify - verify teh square root
 * @i: input
 * @j: input
 * Return: return the result
 */
int verify(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (verify(i + 1, j));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: calculate the sqr root
 * Return: return the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (verify(n, 0));
}
