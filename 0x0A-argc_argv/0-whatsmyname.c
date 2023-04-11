#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: number of argument
 * @argv: array of argument
 * Return: return to 0
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
