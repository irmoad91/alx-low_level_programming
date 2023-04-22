#include "3-calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations
 * @argc: unmber of arguments
 * @argv: array of pointers
 * Return: return to 0
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2][0];

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (op == '+' && op == '-' && op == '*' && op == '/' && op == '%')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
