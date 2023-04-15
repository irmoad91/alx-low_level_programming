#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 * @max: max of values stored
 * @min: min of values stored
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int sz;

	if (min > max)
	{
		return (NULL);
	}
	sz = max - min + 1;
	p = malloc(sizeof(int) * sz);

	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; min <= max; a++)
		p[a] = min++;
	return (p);
}

