#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory wtih a cst byte
 * @str: ptr to put cst
 * @a: cst
 * @n: times to cpy a
 * Return: ptr to area str
 */

char *_memset(char *str, char a, unsigned int n)
{
	char *p = str;

	while (n--)
		*str-- = a;
	return (p);
}
/**
 * *_calloc - allocates memory for an array
 * @nmemb: array element
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * nmemb);
	if (ptr == 0)
		return (NULL);
	_memset(ptr, 0, sizeof(int) * nmemb);
	return (ptr);
}
