#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <strdag.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int a;

	va_start(numbers, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numbers, int));

		if (a < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(numbers);
}
