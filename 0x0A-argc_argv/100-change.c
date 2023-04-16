#include <stdio.h>
#include "main.h"

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: argument number
 * @argv: argument array
 * Return: return to 0
 */
int main(int argc, char **argv)
{
	int n, total, count;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	count = atoi(argv[1]);
	total = 0;

	if (count < 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < 5 && count >= 0; n++)
	{
		while (count >= cents[n])
		{
			total++;
			count -= cents[n];
		}
	}

	printf("%d\n", total);
	return (0);
}
