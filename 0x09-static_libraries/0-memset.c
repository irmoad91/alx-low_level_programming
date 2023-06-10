#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: momory of a pointer
 * @n: bytes of memory pointed by s
 * Return: to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
