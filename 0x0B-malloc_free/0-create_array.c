#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @c: char
 * @size: the size of array
 * Return: return pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		array[n] = c;
	return (array);
}
