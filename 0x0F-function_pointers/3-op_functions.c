#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: first number
 * @b: second number
 * Return: return to the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - sub of two numbers
 * @a: first number
 * @b: second number
 * Return: return to sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - the product of two numbers
 * @a: fisrt number
 * @b: second number
 * Return: return to product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 * Return: result of the division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - the rest of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: result of the rest
 */
int op_mod(int a, int b)
{
	return (a % b);
}
