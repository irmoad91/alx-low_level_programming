#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: ptr to first string
 * @s2: ptr to scnd string to concatenate from
 * @n: number of bytes from s2 toconcatenate to s1
 * Return: pointer shall point to a newly allocated space in memory(s1)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strg;
	unsigned int a = 0, b = 0;
	unsigned int lentgh1 = 0, lentgh2 = 0;

	while (s1 && s1[lentgh1])
	{
		lentgh1++;
	}
	while (s2 && s2[lentgh2])
	{
		lentgh2++;
	}
	if (n < lentgh2)
	{
		strg = malloc(sizeof(char) * (lentgh1 + n + 1));
	}
	else
	{
		strg = malloc(sizeof(char) * (lentgh1 + lentgh2 + 1));
	}
	if (!strg)
	{
		return (NULL);
	}
	while (a < lentgh1)
	{
		strg[a] = s1[a];
		a++;
	}
	while (n < lentgh2 && a < (lentgh1 + n))
	{
		strg[a++] = s2[b++];
	}
	while (n >= lentgh2 && a < (lentgh1 + lentgh2))
	{
		strg[a++] = s2[b++];
	}
	strg[a] = '\0';
	return (strg);
}
