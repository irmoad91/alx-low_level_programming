#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @c: input (occurrence of the character)
 * @s: input the string
 * Return: return 0
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}

