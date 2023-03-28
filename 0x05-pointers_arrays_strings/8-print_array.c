#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of integers
 * @a: int to check
 * @n: int to check
 * Return: 0
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
		if (m != n - 1)
		printf("%d, ", a[m]);
		else
			printf("%d", a[m]);
printf("\n");
}

