#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameter
 * @... - variable number of param to do the sum
 * Return: return to sum or n == 0 return to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return (sum);
}
