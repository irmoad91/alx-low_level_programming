#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments
 * @argv: argument
 * Return: succes to 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (number_of_bytes--)
		printf("%02hhx%s", *ptr++, number_of_bytes ? " " : "\n");
	return (0);
}
