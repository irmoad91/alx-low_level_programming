#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array
 * Return: return to 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' && num2 == 0) ||
	    (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);

	return (0);
}

