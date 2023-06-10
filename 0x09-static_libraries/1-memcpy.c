#include "main.h"
/**
 *_memcpy - function that copies memory area.
 *@dest: stored memory
 *@src: copied memory
 *@n: bytes
 *Return: return to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}

	return (dest);
}
