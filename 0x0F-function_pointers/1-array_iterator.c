#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: array
 * @size: size of array
 * @action: function ptr
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a;

	if (array && size > 0 && action)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
