#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer
 * Return: integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int nb = 0;
	int max = 1;
	int min = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			max *= -1;
		}

		while (s[a] >= 48 && s[a] <= 57)
		{
			min = 1;
			nb = (nb * 10) + (s[a] - '0');
			c++;
		}

		if (min == 1)
		{
			break;
		}

		a++;
	}

	nb *= max;
	return (nb);
}

