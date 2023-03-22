#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the intput number as an integer.
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (k < 0)
	{
		_putchar(-k + 48);
		return (-k);
	}
	else
	{
		_putchar(k + 48);
		return (k);
	}
}
