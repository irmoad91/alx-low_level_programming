#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: return to 0
 */
char *_strdup(char *str)
{
	int a;
	int b = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	c = malloc(sizeof(char) * (a + 1));
	if (c == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		c[b] = str[b];
	return (c);
}
