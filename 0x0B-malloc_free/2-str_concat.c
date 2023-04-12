#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first input to concat
 * @s2: second input to concat
 * Return: result of concat
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	int a;
	int b;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = b = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	while (s2[b] != '\0')
	{
		b++;
	}
	res = malloc(sizeof(char) * (a + b + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	a = b = 0;
	while (s1[a] != '\0')
	{
		res[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		res[a] = s2[b];
		a++;
		b++;
	}
	res[a] = '\0';
	return (res);
}

