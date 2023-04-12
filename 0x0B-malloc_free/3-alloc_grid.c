#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: res = pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	res = malloc(sizeof(int *) * height);
	if (res == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		res[a] = malloc(sizeof(int) * width);
		if (res[a] == NULL)
		{
			for (; a >= 0; a--)
			{
				free(res[a]);
			}
			free(res);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			res[a][b] = 0;
		}
	}
	return (res);
}
