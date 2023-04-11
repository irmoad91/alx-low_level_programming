#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of arg
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a;
	int b;
	int sum = 0;
	char *f;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; argv[a]; a++)
	{
		b = strtol(argv[a], &f, 10);
		if (*f)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
	return (0);
}
