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
	unsigned int a, b;
	unsigned int lentgh1, lentgh2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (lentgh1 = 0; s1[lentgh1] != '\0'; lenght1++)
		;
	for (lentgh2 = 0; s2[lentgh2] != '\0'; lenght2++)
		;
	strg = malloc(lentgh1 + n + 1);
	if (strg == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
		strg[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		strg[a] = s2[b];
		a++;
	}
	strg[a] = '\0';
	return (strg);
}

