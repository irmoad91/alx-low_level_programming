#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arg
 * @av: array of arg
 * Return: Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c;
	int con;
	char *strg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			con++;
		}
		con++;
	}

	strg = malloc(sizeof(char) * (con + 1));

	if (strg == NULL)
	{
		return (NULL);
	}
	c = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			strg[c] = av[a][b];
			c++;
		}
		strg[c] = '\n';
		c++;
	}
	return (strg);
}

